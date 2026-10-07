"""
Suscriptor GOOSE de prueba (IEC 61850-8-1) basado en Scapy.

Escucha en una interfaz de red todas las tramas Ethernet con EtherType GOOSE
(0x88B8), decodifica el goosePdu (BER/ASN.1) y muestra APPID, gocbRef, stNum,
sqNum y los NUM_VALORES (8) valores double que publica Typhoon en el dataset
(allData). Los últimos valores recibidos quedan en la lista ultimos_valores.

Pensado para el GOOSE que publica Typhoon HIL según hil_publisher.icd (dataset
ds_DoubleVal: Va, Vb, Vc, Ia, Ib, Ic, P, Q). Para probarlo sin el HIL, usa el
publicador y los tests de la carpeta test/.

Pasos de la decodificación (en goose_callback):
  1. Coger los bytes que van detrás de la cabecera Ethernet.
  2. Leer la cabecera GOOSE de 8 bytes (APPID y Length).
  3. Separar el goosePdu en campos TLV con ber_items().
  4. Separar allData en sus valores y convertir cada uno con decode_data().

Uso:
    python subscriber_goose.py

Requisitos: scapy + Npcap (Windows) o permisos de root (Linux).
"""
from scapy.all import sniff, Ether, Raw
import struct  # para leer la cabecera GOOSE y convertir bytes a float/double
import sys

# Interfaz de red en la que se escucha.
#   - Linux: "veth0", el otro extremo del par veth que usa el publicador ("veth1").
#   - Windows: nombre del adaptador tal y como lo ve Scapy/Npcap ("Ethernet"),
#     o su nombre de dispositivo completo r"\Device\NPF_{...}".
# Para listar los nombres disponibles:
#   python -c "from scapy.all import show_interfaces; show_interfaces()"
INTERFACE = "veth0" if sys.platform != "win32" else "Ethernet"

# Número de valores double que publica Typhoon en el dataset (allData).
NUM_VALORES = 8

# Nombres para mostrar cada valor, en el mismo orden que los FCDA del dataset
# ds_DoubleVal de hil_publisher.icd (MMXU1): tensiones de fase PhV.phsA/B/C,
# corrientes A.phsA/B/C, potencia activa TotW y reactiva TotVAr.
NOMBRES = ["Va", "Vb", "Vc", "Ia", "Ib", "Ic", "P", "Q"]

# Últimos valores recibidos (lista de NUM_VALORES floats). Se actualiza en cada
# trama GOOSE válida, por si se quiere usar desde otro código.
ultimos_valores = [None] * NUM_VALORES


def ber_items(data):
    """
    Separa una secuencia de elementos BER en una lista de (etiqueta, valor).

    Solo recorre un nivel: si un valor es a su vez una secuencia (como el
    goosePdu o allData), se vuelve a llamar a ber_items() sobre ese valor.
    Ejemplo: ber_items(b"\\x85\\x01\\x03\\x86\\x01\\x00")
             -> [(0x85, b"\\x03"), (0x86, b"\\x00")]
    """
    items = []
    i = 0
    while i + 2 <= len(data):
        tag = data[i]       # 1er byte: etiqueta
        n = data[i + 1]     # 2º byte: longitud (o indicador de forma larga)
        i += 2
        # Forma larga: si el bit alto está a 1, los 7 bits bajos dicen cuántos
        # bytes siguientes forman la longitud real (p. ej. 81 9C -> 156).
        if n & 0x80:
            num = n & 0x7F
            n = int.from_bytes(data[i:i + num], "big")
            i += num
        items.append((tag, data[i:i + n]))  # valor: los n bytes siguientes
        i += n
    return items


def decode_data(tag, value):
    """
    Convierte un elemento de allData (tipo MMS Data) en un valor de Python.

    La etiqueta indica el tipo:
      0x83 boolean, 0x85 integer (con signo), 0x86 unsigned,
      0x87 floating-point (float de 32 bits o double de 64 bits).
    Si el tipo no está soportado, devuelve los bytes en hexadecimal.
    """
    if tag == 0x83:  # boolean: 0x00 = FALSE, cualquier otro = TRUE
        return value != b"\x00"
    if tag == 0x85:  # integer: complemento a dos, big-endian
        return int.from_bytes(value, "big", signed=True)
    if tag == 0x86:  # unsigned: big-endian
        return int.from_bytes(value, "big")
    if tag == 0x87:  # floating-point: 1 byte de tamaño de exponente + IEEE-754
        if len(value) == 9 and value[0] == 0x0B:
            return struct.unpack(">d", value[1:])[0]  # 0x0B -> double (64 bits)
        if len(value) == 5 and value[0] == 0x08:
            return struct.unpack(">f", value[1:])[0]  # 0x08 -> float (32 bits)
    return value.hex()  # tipo no soportado: se muestra en hexadecimal


def goose_callback(packet):
    """
    Se ejecuta por cada trama capturada por sniff(). Decodifica la trama
    GOOSE e imprime sus datos principales y los valores de allData.
    """
    # Comprobación redundante con el filtro BPF de sniff(), por si se usa
    # este callback sin filtro: solo se procesan tramas Ethernet GOOSE.
    if not (packet.haslayer(Ether) and packet[Ether].type == 0x88b8):
        return
    print("\n[+] ¡Trama GOOSE recibida!")
    print(f"    MAC Origen:  {packet[Ether].src}")
    print(f"    MAC Destino: {packet[Ether].dst}")

    # Paso 1: Scapy no tiene un decodificador GOOSE cargado por defecto, así
    # que todo lo que va detrás de la cabecera Ethernet queda como capa Raw.
    if not packet.haslayer(Raw):
        return
    raw = bytes(packet[Raw].load)

    # Paso 2: cabecera GOOSE de 8 bytes (APPID, Length, Reserved1, Reserved2).
    # Length cuenta cabecera + PDU; se usa para cortar los bytes de relleno que
    # Ethernet añade a las tramas de menos de 60 bytes.
    appid, length = struct.unpack(">HH", raw[:4])

    # Paso 3: el PDU debe empezar por la etiqueta goosePdu (0x61). Si no, la
    # trama no sigue la norma (p. ej. un payload de prueba) y se muestra en hex.
    items = ber_items(raw[8:length])
    if not items or items[0][0] != 0x61:
        print(f"    Payload no reconocido como goosePdu: {raw.hex()}")
        return

    # Campos del goosePdu como diccionario {etiqueta: bytes del valor}.
    # Etiquetas: 0x80 gocbRef, 0x85 stNum, 0x86 sqNum, 0xAB allData...
    campos = dict(ber_items(items[0][1]))
    print(f"    APPID:   0x{appid:04x}")
    if 0x80 in campos:
        print(f"    gocbRef: {campos[0x80].decode(errors='replace')}")
    if 0x85 in campos and 0x86 in campos:
        st = int.from_bytes(campos[0x85], "big")
        sq = int.from_bytes(campos[0x86], "big")
        print(f"    stNum:   {st}  sqNum: {sq}")

    # Paso 4: allData es una secuencia; cada elemento es un valor del dataset.
    # Typhoon envía NUM_VALORES doubles. Solo se cogen los elementos de tipo
    # floating-point (0x87), por si el dataset incluye también calidad (q) o
    # marcas de tiempo (t) junto a cada valor.
    if 0xAB not in campos:
        print("    La trama no trae allData")
        return
    valores = [decode_data(tag, value)
               for tag, value in ber_items(campos[0xAB]) if tag == 0x87]
    if len(valores) != NUM_VALORES:
        print(f"    Aviso: se esperaban {NUM_VALORES} valores y llegaron {len(valores)}")

    # Se muestra cada valor con su nombre (zip para en el más corto, así que
    # si llegan de más, los sobrantes no se muestran).
    for nombre, valor in zip(NOMBRES, valores):
        print(f"    {nombre:>10}: {valor}")

    # Se guardan los valores recibidos en la lista global (se modifica en su
    # sitio para que quien la haya importado vea los cambios). Si llegan
    # menos de NUM_VALORES, el resto conserva el valor anterior; si llegan
    # más, se descartan los sobrantes.
    ultimos_valores[:len(valores[:NUM_VALORES])] = valores[:NUM_VALORES]


if __name__ == "__main__":
    # Solo se captura al ejecutar el script directamente; así los tests de la
    # carpeta test/ pueden importar goose_callback sin quedarse en sniff().
    print(f"Escuchando tráfico GOOSE en '{INTERFACE}'... (Presiona Ctrl+C para salir)")

    # Captura bloqueante (no termina hasta Ctrl+C o hasta que se mata el proceso):
    #   - filter: filtro BPF que aplica Npcap/libpcap, para recibir solo GOOSE.
    #   - prn: función que se llama con cada paquete capturado.
    #   - store=0: no guarda los paquetes en memoria (captura indefinida).
    sniff(iface=INTERFACE, prn=goose_callback, filter="ether proto 0x88b8", store=0)
