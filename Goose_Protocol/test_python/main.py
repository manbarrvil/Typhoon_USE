"""
Lanzador de la prueba GOOSE: ejecuta subscriber_goose.py y publisher_goose.py
como procesos independientes y los detiene juntos con Ctrl+C.

Por qué procesos y no import: ambos scripts ejecutan su bucle principal nada
más cargarse (el publicador con un `while True` y el suscriptor bloqueado en
`sniff`) y no tienen ninguna función que se pueda llamar. Si se importaran, el
primero bloquearía el programa y el segundo no llegaría a arrancar.

Uso:
    python main.py                # suscriptor + publicador
    python main.py --solo sub     # solo suscriptor
    python main.py --solo pub     # solo publicador
    python main.py --duracion 20  # parar automáticamente tras 20 s
    python main.py --retardo 2    # esperar 2 s entre suscriptor y publicador

Nota: Scapy necesita permisos de captura (Npcap en Windows / root en Linux).
"""
import argparse
import subprocess
import sys
import time
from pathlib import Path

# Rutas absolutas a los scripts, para que main.py funcione aunque se lance
# desde otra carpeta.
DIR = Path(__file__).resolve().parent
SUBSCRIBER = DIR / "subscriber_goose.py"
PUBLISHER = DIR / "publisher_goose.py"


def lanzar(script: Path) -> subprocess.Popen:
    """Arranca un script en un proceso hijo con el mismo intérprete de Python."""
    print(f"[main] Lanzando {script.name}")
    # sys.executable: usa el mismo Python (y entorno virtual) que main.py.
    # -u: salida sin buffer para ver los prints de ambos procesos en tiempo real.
    # La salida de los hijos va directamente a esta misma consola.
    return subprocess.Popen([sys.executable, "-u", str(script)], cwd=DIR)


def detener(procesos):
    """Para todos los procesos hijos: primero de forma ordenada y, si no responden, a la fuerza."""
    # 1) terminate() a los que siguen vivos (poll() devuelve None si no han terminado).
    for p in procesos:
        if p.poll() is None:
            p.terminate()
    # 2) Esperar hasta 5 s a cada uno; si no ha terminado, kill().
    for p in procesos:
        try:
            p.wait(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill()


def main():
    # --- Argumentos de línea de comandos ---
    parser = argparse.ArgumentParser(description="Ejecuta publisher/subscriber GOOSE")
    parser.add_argument("--solo", choices=["pub", "sub"], help="Lanzar solo uno de los dos")
    parser.add_argument("--duracion", type=float, default=None,
                        help="Segundos de ejecución antes de parar (por defecto: hasta Ctrl+C)")
    parser.add_argument("--retardo", type=float, default=1.0,
                        help="Espera (s) entre arrancar el suscriptor y el publicador")
    args = parser.parse_args()

    procesos = []
    try:
        # --- Arranque ---
        # El suscriptor arranca primero (y se espera `retardo` segundos) para
        # que sniff() esté escuchando antes de que llegue la primera trama.
        if args.solo in (None, "sub"):
            procesos.append(lanzar(SUBSCRIBER))
            if args.solo is None:
                time.sleep(args.retardo)
        if args.solo in (None, "pub"):
            procesos.append(lanzar(PUBLISHER))

        # --- Supervisión ---
        # Cada 0,2 s se comprueba si algún hijo ha terminado (p. ej. por un
        # error de permisos o de interfaz) o si se ha cumplido la duración.
        # En ambos casos se sale y el bloque finally detiene el resto.
        inicio = time.time()
        while True:
            for p in procesos:
                if p.poll() is not None:
                    print(f"[main] Un proceso terminó con código {p.returncode}; deteniendo el resto.")
                    return
            if args.duracion is not None and time.time() - inicio >= args.duracion:
                print(f"[main] Duración de {args.duracion} s alcanzada.")
                return
            time.sleep(0.2)
    except KeyboardInterrupt:
        # Ctrl+C llega también a los hijos (comparten consola); aquí solo se
        # informa y el finally se asegura de que ninguno quede vivo.
        print("\n[main] Ctrl+C recibido, deteniendo procesos...")
    finally:
        # --- Parada ---
        # Se ejecuta siempre: fin normal, error, duración cumplida o Ctrl+C.
        detener(procesos)
        print("[main] Finalizado.")


if __name__ == "__main__":
    main()
