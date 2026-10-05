"""
Publicador GOOSE de prueba (IEC 61850-8-1) basado en Scapy.

Envía cada 2 segundos una trama Ethernet con EtherType GOOSE (0x88B8) a la
dirección multicast reservada para GOOSE. Sirve para comprobar que el
suscriptor (subscriber_goose.py) o un equipo externo (p. ej. un HIL de Typhoon)
reciben tramas de capa 2 por la interfaz elegida.

IMPORTANTE: el contenido de la trama es ficticio. No es un mensaje GOOSE
válido según la norma (ver comentarios sobre el payload más abajo).

Requisitos: scapy + Npcap (Windows) o permisos de root (Linux).
"""
from scapy.all import sendp, Ether, Raw
import time
import sys

# Interfaz de red por la que se envían las tramas.
#   - Linux: "veth1", pensado para un par veth (veth0 <-> veth1) creado para
#     pruebas locales; el suscriptor escucha en el otro extremo ("veth0").
#   - Windows: nombre del adaptador tal y como lo ve Scapy/Npcap ("Ethernet").
# Para listar los nombres disponibles:
#   python -c "from scapy.all import show_interfaces; show_interfaces()"
INTERFACE = "veth1" if sys.platform != "win32" else "Ethernet"

# Construcción de la trama: capa Ethernet + payload en bruto.
#   - dst="01:0c:cd:01:00:01": rango multicast reservado para GOOSE
#     (01:0C:CD:01:00:00 - 01:0C:CD:01:01:FF).
#   - type=0x88b8: EtherType asignado a GOOSE.
#   - La MAC de origen no se indica; Scapy usa la de la interfaz.
#
# Payload (bytes BER/ASN.1 de ejemplo, NO un goosePdu válido):
#   61 81 00     -> etiqueta goosePdu [APPLICATION 1], longitud declarada 0
#   80 02 00 01  -> campo [0] (gocbRef), longitud 2, valor 0x0001
#   81 01 00     -> campo [1] (timeAllowedtoLive), longitud 1, valor 0
# Una trama GOOSE real llevaría además, antes del PDU, la cabecera de 8 bytes
# (APPID, Length, Reserved1, Reserved2) y los campos completos del PDU
# (gocbRef, datSet, goID, t, stNum, sqNum, allData...).
goose_frame = (
    Ether(dst="01:0c:cd:01:00:01", type=0x88b8) /
    Raw(load=b"\x61\x81\x00\x80\x02\x00\x01\x81\x01\x00")  # Payload hexadecimal ficticio
)

print(f"Enviando mensajes GOOSE en '{INTERFACE}' cada 2 segundos...")

# Contador local que imita el stNum de GOOSE (número de cambio de estado).
# Solo se imprime por pantalla; no se escribe dentro de la trama.
st_num = 1
try:
    # Bucle infinito de publicación: se detiene con Ctrl+C
    # (o cuando main.py termina el proceso).
    while True:
        # sendp envía en capa 2 (sin IP), justo lo que necesita GOOSE.
        sendp(goose_frame, iface=INTERFACE, verbose=False)
        print(f"[>] Trama GOOSE enviada (stNum simulado: {st_num})")
        st_num += 1
        time.sleep(2)
except KeyboardInterrupt:
    print("\nPublicación detenida.")
