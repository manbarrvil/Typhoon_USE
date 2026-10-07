"""
Prueba en vivo: lanza ../subscriber_goose.py y publisher_goose_8.py como
procesos independientes y los detiene juntos (Ctrl+C o --duracion).

Por qué procesos y no import: el suscriptor se queda bloqueado en sniff() y el
publicador en su bucle de envío, así que llamarlos uno detrás de otro dentro
del mismo programa haría que el primero bloqueara al segundo.

Necesita Npcap (Windows) o root (Linux) y que ambos scripts usen la misma
interfaz (o un par veth en Linux). Para la prueba sin red, usa
test_subscriber_8.py.

Uso:
    python main.py                  # hasta Ctrl+C
    python main.py --duracion 10    # parar tras 10 s
    python main.py --con-calidad    # el publicador añade q tras cada valor
"""
import argparse
import subprocess
import sys
import time
from pathlib import Path

# Rutas absolutas, para que main.py funcione aunque se lance desde otra carpeta.
DIR = Path(__file__).resolve().parent
SUBSCRIBER = DIR.parent / "subscriber_goose.py"   # el suscriptor que se prueba
PUBLISHER = DIR / "publisher_goose_8.py"          # el publicador de prueba


def lanzar(script, *extra):
    """
    Arranca un script en un proceso hijo con el mismo Python (sys.executable,
    así se usa el mismo entorno virtual) y la opción -u (salida sin buffer,
    para ver los print() de ambos procesos en tiempo real). `extra` son
    argumentos adicionales para el script.
    """
    print(f"[main] Lanzando {script.name}")
    return subprocess.Popen([sys.executable, "-u", str(script), *extra], cwd=script.parent)


def main():
    # --- Argumentos de línea de comandos ---
    parser = argparse.ArgumentParser(description="Prueba en vivo GOOSE de 8 doubles")
    parser.add_argument("--duracion", type=float, default=None,
                        help="Segundos antes de parar (por defecto: hasta Ctrl+C)")
    parser.add_argument("--con-calidad", action="store_true",
                        help="El publicador añade la calidad (q) tras cada valor")
    args = parser.parse_args()

    procesos = []
    try:
        # --- Arranque ---
        # El suscriptor arranca primero y se espera 1 s para que sniff() ya
        # esté escuchando cuando llegue la primera trama.
        procesos.append(lanzar(SUBSCRIBER))
        time.sleep(1.0)
        procesos.append(lanzar(PUBLISHER, *(["--con-calidad"] if args.con_calidad else [])))

        # --- Supervisión ---
        # Cada 0,2 s se comprueba si algún hijo ha terminado (p. ej. por un
        # error de permisos o de interfaz) o si se ha cumplido la duración.
        inicio = time.time()
        while True:
            for p in procesos:
                if p.poll() is not None:  # poll() es None mientras sigue vivo
                    print(f"[main] Un proceso terminó con código {p.returncode}; deteniendo el resto.")
                    return
            if args.duracion is not None and time.time() - inicio >= args.duracion:
                print(f"[main] Duración de {args.duracion} s alcanzada.")
                return
            time.sleep(0.2)
    except KeyboardInterrupt:
        print("\n[main] Ctrl+C recibido, deteniendo procesos...")
    finally:
        # --- Parada (siempre: fin normal, error, duración o Ctrl+C) ---
        # Primero terminate() a los que siguen vivos; si alguno no termina en
        # 5 s, kill().
        for p in procesos:
            if p.poll() is None:
                p.terminate()
        for p in procesos:
            try:
                p.wait(timeout=5)
            except subprocess.TimeoutExpired:
                p.kill()
        print("[main] Finalizado.")


if __name__ == "__main__":
    main()
