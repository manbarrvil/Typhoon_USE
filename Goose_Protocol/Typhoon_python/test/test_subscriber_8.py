"""
Tests sin red de ../subscriber_goose.py con 8 valores double.

Construye tramas con build_goose() de publisher_goose_8.py y se las pasa
directamente a goose_callback() del suscriptor, sin enviar nada por la red
(no hace falta Npcap ni permisos de administrador).

Qué se comprueba:
  - Los 8 doubles llegan exactos, en orden, y quedan en ultimos_valores.
  - Se ignoran los elementos que no son floating-point (calidad q).
  - Se avisa si llegan menos o más de 8 valores.
  - Se entienden también floats de 32 bits.
  - Las tramas que no son GOOSE, o con un payload que no es un goosePdu,
    no rompen el suscriptor.

Uso (desde cualquier carpeta):
    python test_subscriber_8.py
    python -m unittest discover -s Typhoon_python/test -v
"""
import contextlib
import io
import struct
import sys
import unittest
from pathlib import Path

from scapy.all import Ether, Raw

# Permite importar el suscriptor (carpeta padre) y el publicador (esta carpeta)
# aunque los tests se lancen desde otra carpeta.
DIR = Path(__file__).resolve().parent
sys.path.insert(0, str(DIR.parent))
sys.path.insert(0, str(DIR))

# Importar ambos scripts es seguro: su sniff()/bucle de envío está dentro de
# `if __name__ == "__main__":` y no se ejecuta al importarlos.
import subscriber_goose as sub  # noqa: E402
import publisher_goose_8 as pub  # noqa: E402


def procesar(trama):
    """
    Pasa una trama al callback del suscriptor y devuelve lo que imprime.

    La trama se convierte a bytes y se vuelve a leer como Ether para que el
    suscriptor la reciba igual que si hubiera llegado por la red (con su capa
    Raw recién decodificada por Scapy).
    """
    salida = io.StringIO()
    with contextlib.redirect_stdout(salida):  # captura los print() del callback
        sub.goose_callback(Ether(bytes(trama)))
    return salida.getvalue()


class TestSubscriber8(unittest.TestCase):
    def setUp(self):
        # ultimos_valores es global en el suscriptor: se vacía antes de cada
        # test para que un test no herede los valores del anterior.
        sub.ultimos_valores[:] = [None] * sub.NUM_VALORES

    def test_publicador_y_suscriptor_esperan_8_valores(self):
        # Configuración coherente: 8 valores y un nombre para cada uno.
        self.assertEqual(sub.NUM_VALORES, 8)
        self.assertEqual(pub.NUM_VALORES, 8)
        self.assertEqual(len(sub.NOMBRES), 8)

    def test_decodifica_8_doubles(self):
        salida = procesar(pub.build_goose(pub.VALORES_BASE, 5, 3, 0.0))
        # Igualdad exacta: un double viaja sin pérdida de precisión.
        self.assertEqual(sub.ultimos_valores, pub.VALORES_BASE)
        # También se muestran bien la cabecera del PDU y los nombres.
        self.assertIn("stNum:   5  sqNum: 3", salida)
        self.assertIn(pub.GOCB_REF, salida)
        for nombre in sub.NOMBRES:
            self.assertIn(nombre, salida)
        self.assertNotIn("Aviso", salida)

    def test_ignora_calidad_entre_valores(self):
        # allData = [double, q, double, q, ...]: las q (0x84) se descartan.
        salida = procesar(pub.build_goose(pub.VALORES_BASE, 1, 0, 0.0, con_calidad=True))
        self.assertEqual(sub.ultimos_valores, pub.VALORES_BASE)
        self.assertNotIn("Aviso", salida)

    def test_valores_especiales(self):
        # Ceros con signo, valores extremos, infinito y enteros grandes.
        valores = [0.0, -0.0, 1e-300, -1e300, float("inf"), 3.141592653589793, -1.0, 2 ** 53]
        procesar(pub.build_goose(valores, 1, 0, 0.0))
        self.assertEqual(sub.ultimos_valores, valores)

    def test_actualiza_con_cada_trama(self):
        # La segunda trama sustituye por completo a los valores de la primera.
        procesar(pub.build_goose(pub.VALORES_BASE, 1, 0, 0.0))
        nuevos = [v + 1 for v in pub.VALORES_BASE]
        procesar(pub.build_goose(nuevos, 2, 0, 0.0))
        self.assertEqual(sub.ultimos_valores, nuevos)

    def test_avisa_si_faltan_valores(self):
        # Caso típico si Typhoon publica con un ICD de menos valores.
        salida = procesar(pub.build_goose(pub.VALORES_BASE[:3], 1, 0, 0.0))
        self.assertIn("se esperaban 8 valores y llegaron 3", salida)
        # Se guardan los que llegan; el resto conserva su valor anterior (None).
        self.assertEqual(sub.ultimos_valores[:3], pub.VALORES_BASE[:3])
        self.assertEqual(sub.ultimos_valores[3:], [None] * 5)

    def test_avisa_si_sobran_valores(self):
        valores = pub.VALORES_BASE + [99.0]
        salida = procesar(pub.build_goose(valores, 1, 0, 0.0))
        self.assertIn("se esperaban 8 valores y llegaron 9", salida)
        self.assertEqual(sub.ultimos_valores, pub.VALORES_BASE)  # el 9º se descarta

    def test_float_32_bits(self):
        # Typhoon podría publicar float de 32 bits (0x08 + 4 bytes) en vez de
        # double. Se monta a mano un goosePdu mínimo (gocbRef + allData).
        all_data = b"".join(pub.ber_tlv(0x87, b"\x08" + struct.pack(">f", v)) for v in pub.VALORES_BASE)
        pdu = pub.ber_tlv(0x61, pub.ber_tlv(0x80, pub.GOCB_REF.encode()) + pub.ber_tlv(0xAB, all_data))
        raw = struct.pack(">HHHH", pub.APPID, 8 + len(pdu), 0, 0) + pdu
        procesar(Ether(dst="01:0c:cd:01:00:01", type=0x88b8) / Raw(raw))
        # Un float pierde precisión: se compara con 3 decimales.
        for recibido, esperado in zip(sub.ultimos_valores, pub.VALORES_BASE):
            self.assertAlmostEqual(recibido, esperado, places=3)

    def test_payload_no_goose(self):
        # EtherType GOOSE pero el PDU no empieza por 0x61: se muestra en hex
        # y no se tocan los valores guardados.
        trama = Ether(dst="01:0c:cd:01:00:01", type=0x88b8) / Raw(b"\x00\x01\x00\x10" + b"\x00" * 12)
        salida = procesar(trama)
        self.assertIn("no reconocido", salida)
        self.assertEqual(sub.ultimos_valores, [None] * 8)

    def test_ignora_tramas_no_goose(self):
        # Una trama IPv4 (0x0800) se descarta sin imprimir nada.
        salida = procesar(Ether(dst="ff:ff:ff:ff:ff:ff", type=0x0800) / Raw(b"hola"))
        self.assertEqual(salida, "")


if __name__ == "__main__":
    unittest.main(verbosity=2)
