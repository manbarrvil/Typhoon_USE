# Prueba de mensajes GOOSE con Scapy

Scripts en Python para enviar y recibir tramas **GOOSE** (IEC 61850-8-1) a nivel Ethernet (capa 2). El publicador envía un valor **double** (por defecto `24.5678`) dentro de un mensaje GOOSE que sigue la norma, y el suscriptor lo decodifica y lo muestra. Sirven para comprobar que dos equipos intercambian datos por GOOSE, por ejemplo un PC y un HIL de Typhoon, o dos interfaces del mismo PC.

| Archivo | Qué hace |
|---|---|
| `publisher_goose.py` | Envía cada 2 segundos una trama GOOSE con un double en el dataset. |
| `subscriber_goose.py` | Escucha las tramas GOOSE de una interfaz, las decodifica y muestra sus campos y valores. |
| `main.py` | Ejecuta los dos scripts a la vez y los detiene juntos. |

## Requisitos

- Python 3.8 o superior.
- Scapy:
  ```
  pip install scapy
  ```
- **Windows:** [Npcap](https://npcap.com/) instalado. Ejecuta la terminal **como administrador**.
- **Linux:** ejecuta los scripts con `sudo` (o con permisos `CAP_NET_RAW`).

## Configuración

### Interfaz de red

Cada script tiene la interfaz escrita en la constante `INTERFACE`, al principio del archivo:

| Sistema | Publicador | Suscriptor |
|---|---|---|
| Windows | `"Ethernet"` | `"Ethernet"` |
| Linux | `"veth1"` | `"veth0"` |

Si tu adaptador se llama de otra forma, **cambia `INTERFACE` en los dos archivos**. Para ver los nombres que reconoce Scapy:

```
python -c "from scapy.all import show_interfaces; show_interfaces()"
```

En Linux, `veth0` y `veth1` son un par de interfaces virtuales conectadas entre sí: lo que se envía por una se recibe por la otra. Para crearlas:

```
sudo ip link add veth0 type veth peer name veth1
sudo ip link set veth0 up
sudo ip link set veth1 up
```

### Valor y parámetros GOOSE (publicador)

Al principio de `publisher_goose.py`:

| Constante | Valor por defecto | Para qué sirve |
|---|---|---|
| `VALOR` | `24.5678` | El double que se envía. |
| `APPID` | `0x0001` | Identificador de aplicación, en la cabecera GOOSE. |
| `GOCB_REF` | `"TyphoonLD/LLN0$GO$gcb1"` | Referencia al bloque de control GOOSE. |
| `DAT_SET` | `"TyphoonLD/LLN0$DataSet1"` | Referencia al dataset. |
| `GO_ID` | `"TyphoonGOOSE"` | Identificador del mensaje. |
| `TIME_ALLOWED_TO_LIVE_MS` | `4000` | Tiempo (ms) que el receptor considera válido el mensaje. Debe ser mayor que el periodo de envío (2 s). |
| `CONF_REV` | `1` | Revisión de la configuración del dataset. |

Los identificadores son de ejemplo. Si vas a recibir el mensaje con un HIL de Typhoon u otro IED, **tienen que coincidir con lo que configures en el receptor**.

## Uso

Desde esta carpeta (`Goose_Protocol/test_python`):

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
Enviando mensajes GOOSE en 'Ethernet' cada 2 segundos (valor = 24.5678)...
[>] Trama GOOSE enviada: valor=24.5678 (stNum=1, sqNum=0)

[+] ¡Trama GOOSE recibida!
    MAC Origen:  xx:xx:xx:xx:xx:xx
    MAC Destino: 01:0c:cd:01:00:01
    APPID:   0x0001
    gocbRef: TyphoonLD/LLN0$GO$gcb1
    stNum:   1  sqNum: 0
    allData[0]: 24.5678
```

---

## Guía para interpretar el código

### Conceptos previos

**Estructura de una trama GOOSE.** GOOSE no usa IP: va directamente sobre Ethernet.

```
+-------------------+----------------------+--------------------------------+
| Cabecera Ethernet | Cabecera GOOSE (8 B) | goosePdu (codificado en BER)   |
| dst, src, 0x88B8  | APPID, Length, 0, 0  | 61 LL [gocbRef ... allData]    |
+-------------------+----------------------+--------------------------------+
```

- **Cabecera Ethernet:** MAC de destino `01:0c:cd:01:00:01` (rango multicast reservado para GOOSE), MAC de origen y EtherType `0x88B8`, que identifica GOOSE.
- **Cabecera GOOSE:** 4 números de 16 bits: `APPID`, `Length` (bytes de cabecera + PDU) y dos campos reservados a 0.
- **goosePdu:** el mensaje en sí, con sus campos codificados en BER.

**BER (TLV).** Cada campo se escribe como **T**ag (etiqueta, 1 byte) + **L**ength (longitud) + **V**alue (valor). Un valor puede contener a su vez otros TLV, como una caja dentro de otra. Si la longitud es menor que 128, ocupa 1 byte. Si no, se usa la forma larga: `81 NN` (1 byte de longitud) u `82 NN NN` (2 bytes).

**Campos del goosePdu** (etiqueta `0x61` lo envuelve todo):

| Etiqueta | Campo | Contenido |
|---|---|---|
| `0x80` | gocbRef | Texto: referencia al bloque de control. |
| `0x81` | timeAllowedtoLive | Entero: validez del mensaje en ms. |
| `0x82` | datSet | Texto: referencia al dataset. |
| `0x83` | goID | Texto: identificador del mensaje. |
| `0x84` | t | Instante del último cambio (UtcTime, 8 bytes). |
| `0x85` | stNum | Entero: sube cuando cambia algún valor. |
| `0x86` | sqNum | Entero: cuenta las repeticiones del mismo estado; vuelve a 0 con cada cambio. |
| `0x87` | simulation | Booleano: `FALSE` si es tráfico real. |
| `0x88` | confRev | Entero: revisión de la configuración. |
| `0x89` | ndsCom | Booleano: `FALSE` salvo que falte configurar el GoCB. |
| `0x8A` | numDatSetEntries | Entero: número de valores en allData. |
| `0xAB` | allData | Secuencia con los valores del dataset. |

**Cómo se codifica el double.** Dentro de allData, cada valor lleva una etiqueta que indica su tipo. Un número con decimales usa la etiqueta `0x87` (floating-point):

```
87 09 0B 40 38 91 5B 57 3E AB 36
|  |  |  +----------------------- 8 bytes del double 24.5678 (IEEE-754, big-endian)
|  |  +-------------------------- 0x0B = 11 bits de exponente -> double de 64 bits
|  +----------------------------- longitud del valor: 9 bytes
+-------------------------------- etiqueta floating-point
```

Un float de 32 bits sería igual, pero con `87 05 08` y 4 bytes de número.

> Ojo: dentro del goosePdu, `0x87` significa "simulation"; dentro de allData, `0x87` significa "floating-point". La misma etiqueta tiene un significado distinto según el nivel en el que aparece.

### `publisher_goose.py`

Al cargarse, el script define las constantes y las funciones y entra en un bucle infinito que construye y envía una trama cada 2 segundos.

| Función | Qué hace | Ejemplo |
|---|---|---|
| `ber_tlv(tag, value)` | Construye un elemento BER: añade la etiqueta y la longitud (forma corta o larga) delante de `value`. Es la pieza básica con la que se monta todo el mensaje. | `ber_tlv(0x85, b"\x03")` → `85 01 03` |
| `ber_uint(n)` | Convierte un entero no negativo en bytes con el mínimo tamaño. Añade un byte `00` cuando hace falta para que no se lea como negativo (BER usa complemento a dos). | `127` → `7F`; `128` → `00 80`; `4000` → `0F A0` |
| `ber_double(x)` | Convierte un double al formato MMS floating-point: el byte `0x0B` seguido de los 8 bytes IEEE-754 en big-endian (`struct.pack(">d", x)`). | `24.5678` → `0B 40 38 91 5B 57 3E AB 36` |
| `utc_time(t)` | Convierte un instante de `time.time()` al formato UtcTime de 8 bytes: 4 bytes de segundos, 3 de fracción de segundo (en unidades de 1/2²⁴ s) y 1 de calidad del reloj (`0x0A`). | — |
| `build_goose(valor, st_num, sq_num, t_cambio)` | Monta la trama completa: (1) allData con el double, (2) todos los campos del goosePdu en orden, (3) los envuelve con la etiqueta `0x61`, (4) añade la cabecera GOOSE de 8 bytes con `struct.pack(">HHHH", ...)` y (5) pone la capa Ethernet de Scapy. Devuelve el paquete listo para `sendp()`. | — |

**Bucle principal.** En cada vuelta:

1. Toma el valor a publicar (`valor = VALOR`). Si quieres enviar una medida que cambie, calcúlala aquí.
2. Si el valor es distinto del anterior, es un nuevo estado: `stNum` sube en 1, `sqNum` vuelve a 0 y se guarda el instante del cambio.
3. Construye la trama con `build_goose()` y la envía con `sendp()`, que transmite en capa 2.
4. Imprime el valor, `stNum` y `sqNum`, suma 1 a `sqNum` y espera 2 s.

La trama se vuelve a construir en cada envío porque `sqNum` cambia siempre.

### `subscriber_goose.py`

Al cargarse, el script define las funciones y se queda bloqueado en `sniff()`, que llama a `goose_callback()` por cada trama GOOSE que llega.

| Función | Qué hace | Ejemplo |
|---|---|---|
| `ber_items(data)` | Hace lo contrario que `ber_tlv`: recorre una secuencia de bytes BER y la separa en una lista de `(etiqueta, valor)`. Entiende la forma larga de la longitud. Solo baja un nivel; para entrar en un valor que contiene otros TLV se vuelve a llamar sobre ese valor. | `85 01 03 86 01 00` → `[(0x85, b"\x03"), (0x86, b"\x00")]` |
| `decode_data(tag, value)` | Convierte un valor de allData en un dato de Python según su etiqueta: `0x83` booleano, `0x85` entero con signo, `0x86` entero sin signo, `0x87` float (`08` + 4 bytes) o double (`0B` + 8 bytes, con `struct.unpack(">d", ...)`). Si el tipo no está soportado, devuelve los bytes en hexadecimal. | `(0x87, 0B 40 38 91 5B 57 3E AB 36)` → `24.5678` |
| `goose_callback(packet)` | Procesa cada trama capturada. Ver los pasos abajo. | — |

**Pasos de `goose_callback`:**

1. Comprueba que la trama es Ethernet con EtherType `0x88B8` e imprime las MAC de origen y destino.
2. Toma los bytes de la capa `Raw`. Scapy no trae un decodificador GOOSE cargado por defecto, así que todo lo que va detrás de la cabecera Ethernet le llega como bytes en bruto.
3. Lee la cabecera GOOSE con `struct.unpack(">HH", raw[:4])` para obtener `APPID` y `Length`. Usa `Length` para descartar los bytes de relleno que Ethernet añade a las tramas cortas.
4. Separa el PDU con `ber_items()`. Si no empieza por `0x61`, no es un goosePdu válido y muestra los bytes en hexadecimal.
5. Convierte los campos del PDU en un diccionario `{etiqueta: valor}` e imprime APPID, gocbRef, stNum y sqNum.
6. Separa allData (`0xAB`) con `ber_items()` y muestra cada valor convertido con `decode_data()`.

**Llamada a `sniff()`:** `filter="ether proto 0x88b8"` hace que Npcap/libpcap entregue solo tramas GOOSE, `prn=goose_callback` indica la función que se llama con cada trama, y `store=0` evita guardar las tramas en memoria.

### `main.py`

Los dos scripts empiezan su bucle infinito en cuanto se cargan, así que no se pueden importar uno detrás del otro: el primero bloquearía al segundo. Por eso `main.py` ejecuta cada uno en un **proceso propio**.

| Función | Qué hace |
|---|---|
| `lanzar(script)` | Arranca un script en un proceso hijo con el mismo intérprete de Python (`sys.executable`) y la opción `-u`, para que los mensajes aparezcan en la consola en tiempo real. |
| `detener(procesos)` | Para los procesos que siguen vivos: primero con `terminate()` y, si alguno no termina en 5 s, con `kill()`. |
| `main()` | Lee los argumentos (`--solo`, `--duracion`, `--retardo`), arranca el suscriptor, espera `--retardo` segundos y arranca el publicador. Después comprueba cada 0,2 s si algún proceso ha terminado o si se ha cumplido la duración. Al salir, por cualquier motivo (incluido Ctrl+C), llama a `detener()`. |

---

## Limitaciones

- **El dataset lleva un solo valor.** Para enviar más, añade más elementos a `all_data` en `build_goose()` y ajusta `numDatSetEntries` (`0x8A`).
- **Los identificadores son de ejemplo.** Un IED o un HIL solo acepta el mensaje si `APPID`, `GOCB_REF`, `DAT_SET`, `GO_ID` y `CONF_REV` coinciden con su configuración.
- **El suscriptor no filtra por gocbRef ni comprueba `timeAllowedtoLive`.** Muestra cualquier trama GOOSE que llegue a la interfaz.
- **`decode_data()` solo entiende booleanos, enteros, float y double.** Otros tipos (bit-string, estructuras, cadenas…) se muestran en hexadecimal.
- **En Windows, con la misma interfaz para enviar y recibir**, si el suscriptor no ve las tramas del publicador, prueba con dos interfaces conectadas entre sí o con un equipo externo.
