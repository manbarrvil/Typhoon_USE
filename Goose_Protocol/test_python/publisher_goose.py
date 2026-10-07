"""
Publicador GOOSE de prueba (IEC 61850-8-1) basado en Scapy.

Envía cada 2 segundos una trama GOOSE (EtherType 0x88B8) a la dirección
multicast reservada para GOOSE. La trama lleva un goosePdu codificado en
BER/ASN.1 cuyo dataset (allData) contiene un único valor double (VALOR).
Sirve para comprobar que el suscriptor (subscriber_goose.py) o un equipo
externo (p. ej. un HIL de Typhoon, o Wireshark) reciben y decodifican el valor.

Estructura de la trama que se envía:

    +-------------------+----------------------+-------------------------------+
    | Cabecera Ethernet | Cabecera GOOSE (8 B) | goosePdu (BER)                |
    | dst, src, 0x88B8  | APPID, Length, 0, 0  | 61 LL [gocbRef ... allData]   |
    +-------------------+----------------------+-------------------------------+

Dentro de allData, el double se codifica así (11 bytes en total):

    87 09 0B xx xx xx xx xx xx xx xx
    |  |  |  +-- 8 bytes del double en IEEE-754, big-endian
    |  |  +----- 0x0B = 11 bits de exponente -> double de 64 bits
    |  +-------- longitud del valor: 9 bytes
    +----------- etiqueta MMS "floating-point" [7]

Requisitos: scapy + Npcap (Windows) o permisos de root (Linux).
"""
from scapy.all import sendp, Ether, Raw
import struct  # para empaquetar números en bytes (double, cabecera GOOSE)
import time
import sys

# Interfaz de red por la que se envían las tramas.
#   - Linux: "veth1", pensado para un par veth (veth0 <-> veth1) creado para
#     pruebas locales; el suscriptor escucha en el otro extremo ("veth0").
#   - Windows: nombre del adaptador tal y como lo ve Scapy/Npcap ("Ethernet").
# Para listar los nombres disponibles:
#   python -c "from scapy.all import show_interfaces; show_interfaces()"
INTERFACE = "veth1" if sys.platform != "win32" else "Ethernet"

# Valor double que se publica en el dataset. Cámbialo aquí para enviar otro.
VALOR = 24.5678

# Parámetros del bloque de control GOOSE (GoCB). Identifican el mensaje y
# deben coincidir con los que espere el suscriptor (en Typhoon HIL se
# configuran en el componente GOOSE). Los valores de aquí son de ejemplo.
APPID = 0x0001                       # identificador de aplicación (cabecera GOOSE)
GOCB_REF = "TyphoonLD/LLN0$GO$gcb1"  # referencia al bloque de control GOOSE
DAT_SET = "TyphoonLD/LLN0$DataSet1"  # referencia al dataset que se publica
GO_ID = "TyphoonGOOSE"               # identificador libre del mensaje
TIME_ALLOWED_TO_LIVE_MS = 4000       # validez del mensaje; debe ser > periodo de envío (2 s)
CONF_REV = 1                         # revisión de la configuración del dataset


def ber_tlv(tag, value):
    """
    Codifica un elemento BER (Tag-Length-Value): etiqueta + longitud + valor.

    En BER la longitud se escribe de dos formas:
      - corta: si cabe en 7 bits (< 128), un solo byte con la longitud.
      - larga: un primer byte 0x8N que indica que vienen N bytes de longitud.
    Ejemplo: ber_tlv(0x85, b"\\x03") -> b"\\x85\\x01\\x03".
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

    BER usa complemento a dos, así que si el bit más alto del primer byte
    quedara a 1 el número se leería como negativo. Por eso se reserva un bit
    extra: 127 -> 7F (1 byte), pero 128 -> 00 80 (2 bytes).
    """
    return n.to_bytes(n.bit_length() // 8 + 1, "big")


def ber_double(x):
    """
    Codifica un double como valor MMS FloatingPoint de 64 bits.

    Formato: 1 byte con el tamaño del exponente (0x0B = 11 bits, que es el de
    un double IEEE-754) seguido de los 8 bytes del número en big-endian
    (struct ">d"). Para 24.5678 da: 0B 40 38 91 5B 57 3E AB 36.
    """
    return b"\x0b" + struct.pack(">d", x)


def utc_time(t):
    """
    Codifica un instante (segundos desde 1970, como time.time()) en el
    formato UtcTime de IEC 61850 (8 bytes):
      - 4 bytes: segundos enteros.
      - 3 bytes: fracción de segundo, en unidades de 1/2^24 s.
      - 1 byte:  calidad del reloj (0x0A = 10 bits de precisión, sin flags).
    """
    seg = int(t)
    frac = int((t - seg) * (1 << 24))
    return seg.to_bytes(4, "big") + frac.to_bytes(3, "big") + b"\x0a"


def build_goose(valor, st_num, sq_num, t_cambio):
    """
    Construye la trama Ethernet GOOSE completa, lista para sendp().

    Parámetros:
      valor     -- double que se publica en allData.
      st_num    -- stNum: número de cambio de estado (sube al cambiar el valor).
      sq_num    -- sqNum: número de repetición del mismo estado.
      t_cambio  -- instante (time.time()) del último cambio de valor.
    """
    # allData (etiqueta 0xAB): lista de valores del dataset. Aquí lleva un
    # único elemento floating-point (etiqueta 0x87) con el double.
    all_data = ber_tlv(0x87, ber_double(valor))

    # Campos del goosePdu, en el orden que fija la norma. Cada etiqueta
    # 0x80, 0x81... es el número de campo dentro del PDU.
    pdu = b"".join([
        ber_tlv(0x80, GOCB_REF.encode()),                   # gocbRef (texto)
        ber_tlv(0x81, ber_uint(TIME_ALLOWED_TO_LIVE_MS)),   # timeAllowedtoLive (ms)
        ber_tlv(0x82, DAT_SET.encode()),                    # datSet (texto)
        ber_tlv(0x83, GO_ID.encode()),                      # goID (texto)
        ber_tlv(0x84, utc_time(t_cambio)),                  # t: instante del último cambio
        ber_tlv(0x85, ber_uint(st_num)),                    # stNum
        ber_tlv(0x86, ber_uint(sq_num)),                    # sqNum
        ber_tlv(0x87, b"\x00"),                             # simulation = FALSE (trama real)
        ber_tlv(0x88, ber_uint(CONF_REV)),                  # confRev
        ber_tlv(0x89, b"\x00"),                             # ndsCom = FALSE (no necesita puesta en servicio)
        ber_tlv(0x8A, ber_uint(1)),                         # numDatSetEntries: 1 valor en allData
        ber_tlv(0xAB, all_data),                            # allData: los valores
    ])
    # Todo el PDU va envuelto en la etiqueta goosePdu [APPLICATION 1] = 0x61.
    goose_pdu = ber_tlv(0x61, pdu)

    # Cabecera GOOSE de 8 bytes (4 enteros de 16 bits big-endian):
    #   APPID, Length (cabecera + PDU, en bytes), Reserved1, Reserved2.
    cabecera = struct.pack(">HHHH", APPID, 8 + len(goose_pdu), 0, 0)

    # Capa Ethernet:
    #   - dst="01:0c:cd:01:00:01": rango multicast reservado para GOOSE
    #     (01:0C:CD:01:00:00 - 01:0C:CD:01:01:FF).
    #   - type=0x88b8: EtherType asignado a GOOSE.
    #   - La MAC de origen no se indica; Scapy usa la de la interfaz.
    # Scapy no trae la capa GOOSE cargada por defecto, así que cabecera + PDU
    # se añaden como bytes en bruto (Raw).
    return Ether(dst="01:0c:cd:01:00:01", type=0x88b8) / Raw(load=cabecera + goose_pdu)


print(f"Enviando mensajes GOOSE en '{INTERFACE}' cada 2 segundos (valor = {VALOR})...")

# Contadores GOOSE, tal como los define la norma:
#   - stNum: sube en 1 cada vez que cambia el valor publicado.
#   - sqNum: cuenta las retransmisiones del mismo estado; vuelve a 0 en cada cambio.
# El suscriptor los usa para saber si un mensaje trae un dato nuevo o es una
# repetición, y para detectar tramas perdidas.
st_num = 1
sq_num = 0
ultimo_valor = VALOR      # valor enviado en el estado actual
t_cambio = time.time()    # instante del último cambio (campo t del PDU)
try:
    # Bucle infinito de publicación: se detiene con Ctrl+C
    # (o cuando main.py termina el proceso).
    while True:
        # Valor a publicar en esta vuelta. Ahora es la constante VALOR; para
        # publicar una medida que varíe, basta con calcularla aquí.
        valor = VALOR

        # Si el valor ha cambiado, es un nuevo estado: stNum+1, sqNum a 0.
        if valor != ultimo_valor:
            st_num += 1
            sq_num = 0
            ultimo_valor = valor
            t_cambio = time.time()

        # sendp envía en capa 2 (sin IP), justo lo que necesita GOOSE.
        # La trama se reconstruye en cada envío porque sqNum cambia siempre.
        sendp(build_goose(valor, st_num, sq_num, t_cambio), iface=INTERFACE, verbose=False)
        print(f"[>] Trama GOOSE enviada: valor={valor} (stNum={st_num}, sqNum={sq_num})")
        sq_num += 1
        time.sleep(2)
except KeyboardInterrupt:
    print("\nPublicación detenida.")
