"""
Publicador GOOSE de prueba (IEC 61850-8-1) con 8 valores double.

Simula lo que enviará Typhoon HIL según ../hil_publisher.icd: cada PERIODO
segundos publica una trama GOOSE (EtherType 0x88B8) cuyo dataset (allData)
lleva NUM_VALORES doubles (Va, Vb, Vc, Ia, Ib, Ic, P, Q). Sirve para probar
../subscriber_goose.py sin tener el HIL conectado.

Para que se vea que los valores cambian, cada envío los desplaza un poco
(valor_k = VALORES_BASE[k] + 0.1 * n). Cada cambio sube stNum y pone sqNum a 0,
como hace un publicador GOOSE real.

Con la opción --con-calidad se añade detrás de cada double su calidad (q,
bit-string 0x84), como haría un dataset con FCDA a nivel de dato; el suscriptor
debe ignorarla y seguir mostrando los 8 valores.

Estructura de allData que se envía (sin --con-calidad):

    AB 58 | 87 09 0B <8 bytes Va> | 87 09 0B <8 bytes Vb> | ... (8 veces)
    |  |     |  |  |
    |  |     |  |  +-- 0x0B = 11 bits de exponente -> double de 64 bits
    |  |     |  +----- longitud del valor: 9 bytes
    |  |     +-------- etiqueta MMS floating-point
    |  +-------------- longitud de allData: 8 x 11 = 88 bytes (0x58)
    +----------------- etiqueta allData

build_goose() se puede importar sin enviar nada (lo usa test_subscriber_8.py);
el bucle de envío solo arranca al ejecutar el script directamente.

Uso:
    python publisher_goose_8.py                 # envío continuo hasta Ctrl+C
    python publisher_goose_8.py --con-calidad   # incluye q tras cada valor
    python publisher_goose_8.py --iface veth1   # otra interfaz

Requisitos: scapy + Npcap (Windows) o permisos de root (Linux).
"""
from scapy.all import sendp, Ether, Raw
import argparse
import struct  # para empaquetar números en bytes (double, cabecera GOOSE)
import sys
import time

# Interfaz de red por la que se envían las tramas. Debe ser la misma en la que
# escucha ../subscriber_goose.py (en Linux, el otro extremo del par veth).
#   python -c "from scapy.all import show_interfaces; show_interfaces()"
INTERFACE = "veth1" if sys.platform != "win32" else "Ethernet"

# Valores base de los 8 doubles publicados (Va, Vb, Vc, Ia, Ib, Ic, P, Q).
# Se eligen distintos entre sí, con decimales y algún negativo, para que un
# fallo de orden o de signo en el suscriptor se note a simple vista.
VALORES_BASE = [230.0, 231.5, 229.8, 10.25, -3.75, 50.0, 0.98, 1234.5678]
NUM_VALORES = len(VALORES_BASE)

PERIODO = 1.0  # segundos entre envíos

# Parámetros del bloque de control GOOSE (GoCB), los mismos que en
# ../hil_publisher.icd. gocbRef y datSet se forman como
# <iedName><ldInst>/LLN0$GO$<cbName> y <iedName><ldInst>/LLN0$<DataSet>.
APPID = 0x0001
GOCB_REF = "HIL_IEDCTRL/LLN0$GO$GoCB_Double"  # iedName + ldInst
DAT_SET = "HIL_IEDCTRL/LLN0$ds_DoubleVal"
GO_ID = "HIL101_GOOSE"
TIME_ALLOWED_TO_LIVE_MS = 4000  # validez del mensaje en ms; debe ser mayor que PERIODO
CONF_REV = 2                    # revisión del dataset (confRev del ICD)

# Calidad "good" (q) de IEC 61850: bit-string de 13 bits. En BER se codifica
# como 1 byte con los bits sin usar del final (3) + 2 bytes de bits, todos a 0.
CALIDAD_OK = b"\x03\x00\x00"


def ber_tlv(tag, value):
    """
    Codifica un elemento BER (Tag-Length-Value): etiqueta + longitud + valor.

    La longitud va en forma corta (1 byte) si es menor que 128, y en forma
    larga (0x81 NN o 0x82 NN NN) si no. Ejemplo: ber_tlv(0x85, b"\\x03")
    -> b"\\x85\\x01\\x03".
    """
    n = len(value)
    if n < 0x80:
        length = bytes([n])                            # forma corta
    elif n <= 0xFF:
        length = bytes([0x81, n])                      # forma larga, 1 byte
    else:
        length = bytes([0x82]) + n.to_bytes(2, "big")  # forma larga, 2 bytes
    return bytes([tag]) + length + value


def ber_uint(n):
    """
    Codifica un entero no negativo como entero BER con el mínimo de bytes.
    Se reserva un bit extra para que no se lea como negativo (complemento a
    dos): 127 -> 7F, pero 128 -> 00 80.
    """
    return n.to_bytes(n.bit_length() // 8 + 1, "big")


def ber_double(x):
    """
    Codifica un double como MMS FloatingPoint de 64 bits: 1 byte con el
    tamaño del exponente (0x0B = 11 bits) + 8 bytes IEEE-754 big-endian.
    """
    return b"\x0b" + struct.pack(">d", x)


def utc_time(t):
    """
    Codifica un instante de time.time() como UtcTime de IEC 61850 (8 bytes):
    4 bytes de segundos, 3 de fracción (en 1/2^24 s) y 1 de calidad del reloj.
    """
    seg = int(t)
    frac = int((t - seg) * (1 << 24))
    return seg.to_bytes(4, "big") + frac.to_bytes(3, "big") + b"\x0a"


def build_goose(valores, st_num, sq_num, t_cambio, con_calidad=False):
    """
    Construye la trama Ethernet GOOSE completa, lista para sendp().

    Parámetros:
      valores     -- lista de doubles que van en allData (normalmente 8, pero
                     los tests pasan más o menos para probar los avisos).
      st_num      -- stNum: número de cambio de estado.
      sq_num      -- sqNum: número de repetición del mismo estado.
      t_cambio    -- instante (time.time()) del último cambio de valor.
      con_calidad -- si es True, cada double va seguido de su calidad (0x84).
    """
    # allData: un elemento floating-point (0x87) por cada double y, si se pide,
    # su calidad (bit-string 0x84) justo detrás.
    elementos = []
    for v in valores:
        elementos.append(ber_tlv(0x87, ber_double(v)))
        if con_calidad:
            elementos.append(ber_tlv(0x84, CALIDAD_OK))
    all_data = b"".join(elementos)

    # Campos del goosePdu, en el orden que fija la norma.
    pdu = b"".join([
        ber_tlv(0x80, GOCB_REF.encode()),                   # gocbRef
        ber_tlv(0x81, ber_uint(TIME_ALLOWED_TO_LIVE_MS)),   # timeAllowedtoLive (ms)
        ber_tlv(0x82, DAT_SET.encode()),                    # datSet
        ber_tlv(0x83, GO_ID.encode()),                      # goID
        ber_tlv(0x84, utc_time(t_cambio)),                  # t: instante del último cambio
        ber_tlv(0x85, ber_uint(st_num)),                    # stNum
        ber_tlv(0x86, ber_uint(sq_num)),                    # sqNum
        ber_tlv(0x87, b"\x00"),                             # simulation = FALSE
        ber_tlv(0x88, ber_uint(CONF_REV)),                  # confRev
        ber_tlv(0x89, b"\x00"),                             # ndsCom = FALSE
        ber_tlv(0x8A, ber_uint(len(elementos))),            # numDatSetEntries: elementos de allData
        ber_tlv(0xAB, all_data),                            # allData: los valores
    ])
    # Todo el PDU va envuelto en la etiqueta goosePdu (0x61).
    goose_pdu = ber_tlv(0x61, pdu)

    # Cabecera GOOSE de 8 bytes: APPID, Length (cabecera + PDU), 2 reservados.
    cabecera = struct.pack(">HHHH", APPID, 8 + len(goose_pdu), 0, 0)

    # Capa Ethernet: MAC multicast GOOSE y EtherType 0x88B8. Scapy no trae la
    # capa GOOSE cargada, así que cabecera + PDU van como bytes en bruto (Raw).
    return Ether(dst="01:0c:cd:01:00:01", type=0x88b8) / Raw(load=cabecera + goose_pdu)


def main():
    # --- Argumentos de línea de comandos ---
    parser = argparse.ArgumentParser(description="Publicador GOOSE de 8 doubles")
    parser.add_argument("--iface", default=INTERFACE, help="Interfaz de red")
    parser.add_argument("--con-calidad", action="store_true",
                        help="Añadir la calidad (q) detrás de cada valor")
    args = parser.parse_args()

    print(f"Enviando GOOSE con {NUM_VALORES} doubles en '{args.iface}' "
          f"cada {PERIODO} s... (Ctrl+C para salir)")

    # st_num: contador de estados GOOSE; n: número de envío, para variar los valores.
    st_num, n = 1, 0
    try:
        while True:
            # Valores de este envío: los base desplazados 0.1 por cada vuelta.
            valores = [v + 0.1 * n for v in VALORES_BASE]

            # Cada envío trae valores nuevos: nuevo estado (stNum+1, sqNum=0)
            # y el instante del cambio (t) es el de este envío.
            t_cambio = time.time()

            # sendp envía en capa 2 (sin IP), que es lo que necesita GOOSE.
            sendp(build_goose(valores, st_num, 0, t_cambio, args.con_calidad),
                  iface=args.iface, verbose=False)
            print(f"[>] stNum={st_num}: {[round(v, 4) for v in valores]}")
            st_num += 1
            n += 1
            time.sleep(PERIODO)
    except KeyboardInterrupt:
        print("\nPublicación detenida.")


if __name__ == "__main__":
    # Solo se publica al ejecutar el script directamente; al importarlo (desde
    # los tests) únicamente se cargan las constantes y build_goose().
    main()
