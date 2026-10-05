"""
Suscriptor GOOSE de prueba (IEC 61850-8-1) basado en Scapy.

Escucha en una interfaz de red todas las tramas Ethernet con EtherType GOOSE
(0x88B8) y muestra por pantalla la MAC de origen, la MAC de destino y el
payload en hexadecimal. No decodifica el contenido ASN.1/BER del mensaje.

Funciona tanto con las tramas de publisher_goose.py como con las de cualquier
equipo que publique GOOSE en la misma red (p. ej. un HIL de Typhoon).

Requisitos: scapy + Npcap (Windows) o permisos de root (Linux).
"""
from scapy.all import sniff, Ether, Raw
import sys

# Interfaz de red en la que se escucha.
#   - Linux: "veth0", el otro extremo del par veth que usa el publicador ("veth1").
#   - Windows: nombre del adaptador tal y como lo ve Scapy/Npcap ("Ethernet"),
#     o su nombre de dispositivo completo r"\Device\NPF_{...}".
# Para listar los nombres disponibles:
#   python -c "from scapy.all import show_interfaces; show_interfaces()"
INTERFACE = "veth0" if sys.platform != "win32" else "Ethernet"


def goose_callback(packet):
    """Se ejecuta por cada trama capturada e imprime sus datos principales."""
    # Comprobación redundante con el filtro BPF de sniff(), por si se usa
    # este callback sin filtro: solo se procesan tramas Ethernet GOOSE.
    if packet.haslayer(Ether) and packet[Ether].type == 0x88b8:
        print("\n[+] ¡Trama GOOSE recibida!")
        print(f"    MAC Origen:  {packet[Ether].src}")
        print(f"    MAC Destino: {packet[Ether].dst}")
        # Scapy no tiene un decodificador GOOSE integrado, así que todo lo que
        # va detrás de la cabecera Ethernet queda como capa Raw (bytes).
        if packet.haslayer(Raw):
            print(f"    Payload (bytes): {packet[Raw].load.hex()}")


print(f"Escuchando tráfico GOOSE en '{INTERFACE}'... (Presiona Ctrl+C para salir)")

# Captura bloqueante (no termina hasta Ctrl+C o hasta que se mata el proceso):
#   - filter: filtro BPF que aplica Npcap/libpcap, para recibir solo GOOSE.
#   - prn: función que se llama con cada paquete capturado.
#   - store=0: no guarda los paquetes en memoria (captura indefinida).
sniff(iface=INTERFACE, prn=goose_callback, filter="ether proto 0x88b8", store=0)
