# Prueba de mensajes GOOSE con Scapy

Scripts en Python para enviar y recibir tramas **GOOSE** (IEC 61850-8-1) a nivel Ethernet (capa 2). Sirven para comprobar que dos equipos se comunican por GOOSE, por ejemplo un PC y un HIL de Typhoon, o dos interfaces del mismo PC.

| Archivo | Qué hace |
|---|---|
| `publisher_goose.py` | Envía una trama GOOSE cada 2 segundos. |
| `subscriber_goose.py` | Escucha las tramas GOOSE de una interfaz y muestra su origen, su destino y su contenido. |
| `main.py` | Ejecuta los dos scripts a la vez y los detiene juntos. |

## Requisitos

- Python 3.8 o superior.
- Scapy:
  ```
  pip install scapy
  ```
- **Windows:** [Npcap](https://npcap.com/) instalado. Ejecuta la terminal **como administrador**.
- **Linux:** ejecuta los scripts con `sudo` (o con permisos `CAP_NET_RAW`).

## Configurar la interfaz de red

Cada script tiene la interfaz escrita en la constante `INTERFACE`, al principio del archivo:

| Sistema | Publicador | Suscriptor |
|---|---|---|
| Windows | `"Ethernet"` | `"Ethernet"` |
| Linux | `"veth1"` | `"veth0"` |

Si tu adaptador se llama de otra forma, **cambia `INTERFACE` en los dos archivos**. Para ver los nombres que reconoce Scapy:

```
python -c "from scapy.all import show_interfaces; show_interfaces()"
```

### Prueba local en Linux con un par veth

Los nombres `veth0` y `veth1` corresponden a un par de interfaces virtuales conectadas entre sí: lo que se envía por una se recibe por la otra. Para crearlas:

```
sudo ip link add veth0 type veth peer name veth1
sudo ip link set veth0 up
sudo ip link set veth1 up
```

## Uso

Desde la carpeta `Goose_Protocol`:

```
python main.py                 # suscriptor + publicador
python main.py --solo sub      # solo el suscriptor (p. ej. para escuchar a un HIL)
python main.py --solo pub      # solo el publicador
python main.py --duracion 20   # se detiene solo a los 20 s
python main.py --retardo 2     # espera 2 s entre arrancar el suscriptor y el publicador
```

Para parar, pulsa **Ctrl+C**. También puedes ejecutar cada script por separado: `python subscriber_goose.py` o `python publisher_goose.py`.

### Salida esperada

```
[main] Lanzando subscriber_goose.py
Escuchando tráfico GOOSE en 'Ethernet'... (Presiona Ctrl+C para salir)
[main] Lanzando publisher_goose.py
Enviando mensajes GOOSE en 'Ethernet' cada 2 segundos...
[>] Trama GOOSE enviada (stNum simulado: 1)

[+] ¡Trama GOOSE recibida!
    MAC Origen:  xx:xx:xx:xx:xx:xx
    MAC Destino: 01:0c:cd:01:00:01
    Payload (bytes): 61810080020001810100
```

## Cómo funciona

### Publicador (`publisher_goose.py`)

Construye una trama Ethernet con:
- **MAC de destino `01:0c:cd:01:00:01`**: es una dirección multicast del rango reservado para GOOSE.
- **EtherType `0x88B8`**: es el identificador de GOOSE.
- **Un contenido de ejemplo** en formato ASN.1/BER.

La envía con `sendp()`, que transmite directamente en capa 2, sin IP, igual que GOOSE. El `stNum` que aparece en pantalla es solo un contador local y no va dentro de la trama.

### Suscriptor (`subscriber_goose.py`)

Usa `sniff()` con el filtro `ether proto 0x88b8`, así que solo recibe tramas GOOSE. Por cada trama imprime la MAC de origen, la MAC de destino y el contenido en hexadecimal. Recibe tanto las tramas del publicador como las de cualquier otro equipo que publique GOOSE en la misma red.

### Lanzador (`main.py`)

Los dos scripts empiezan su bucle infinito en cuanto se cargan, así que no se pueden importar uno detrás del otro. Por eso `main.py` ejecuta cada uno en un **proceso propio**:

1. Arranca el suscriptor.
2. Espera `--retardo` segundos para que el suscriptor ya esté escuchando.
3. Arranca el publicador.
4. Detiene los dos con Ctrl+C, cuando se cumple `--duracion`, o cuando uno de ellos termina (por ejemplo, por un error de permisos o de interfaz).

## Limitaciones

- **El contenido de la trama es ficticio.** No es un mensaje GOOSE válido según la norma: le falta la cabecera de 8 bytes (APPID, Length, Reserved1 y Reserved2) y los campos obligatorios (`gocbRef`, `datSet`, `goID`, `t`, `stNum`, `sqNum`, `allData`…). Un IED o un HIL configurado para suscribirse a un GOOSE concreto **no lo aceptará**. Sirve para comprobar que hay conexión a nivel Ethernet, no para intercambiar datos.
- **El suscriptor no decodifica el mensaje**, solo muestra los bytes en hexadecimal.
- **En Windows, con la misma interfaz para enviar y recibir**, si el suscriptor no ve las tramas del publicador, prueba con dos interfaces conectadas entre sí o con un equipo externo.

## Otros archivos de la carpeta

- `Scapy_goose.py`: un suscriptor más sencillo y antiguo, configurado para la interfaz `eth0`.
- `profinet.py`: un borrador de cliente PROFINET para el HIL101. **No funciona tal como está**: el archivo se llama igual que la librería que importa (`profinet`), y además falta el archivo GSDML que usa.
