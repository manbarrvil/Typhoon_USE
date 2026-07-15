# Typhoon_USE

Repositorio de investigación y docencia (materiales de la SUNRISE Summer School) para simulación Hardware-in-the-Loop (HIL) y control de convertidores de potencia conectados a red — controladores de corriente/tensión/potencia en marco dq, VSG (generador síncrono virtual), STATCOM y DAB (dual active bridge) — construido sobre el toolchain de Typhoon HIL.

Es principalmente una colección de proyectos de herramientas gráficas de fabricante (modelos de Typhoon Schematic Editor, proyectos de DSP en Code Composer Studio) más un subproyecto de automatización en Python. No hay sistema de build, manifiesto de dependencias ni suite de tests a nivel raíz — la mayor parte de la "compilación" ocurre dentro de los IDEs de cada fabricante.

## Estructura del repositorio

- **[`HIL_API/`](HIL_API)** — el único código Python activamente desarrollado. Automatiza simulaciones Typhoon HIL/VHIL de punta a punta (compilar modelo → ejecutar → capturar señales → graficar) e incluye un dashboard web en vivo con Flask. Ver [`HIL_API/CLAUDE.md`](HIL_API/CLAUDE.md) para el comando de ejecución, dependencias y la referencia completa de `typhoon.api.hil`.
- **[`Real_time_sim_VHIL/`](Real_time_sim_VHIL)** — los modelos VHIL/tiempo real que efectivamente controlan los scripts de `HIL_API` (p. ej. `dq_current_ctrl_v3_vhil`, el modelo referenciado por `HIL_API/main.py`).
- **[`TyphoonSim/`](TyphoonSim)** — modelos Typhoon offline, solo software (`.tse` + archivos target de `TyphoonSim.exe`), más `ODE_plant.py` (ODE analítica en espacio de estados de la planta LCL) y exportaciones JSON de sus matrices de estado (AB) y equilibrio, usadas para contrastar el modelo del esquemático con las ecuaciones derivadas a mano.
- **[`Andrei_unb_vsg/`](Andrei_unb_vsg), [`chil_CCS/`](chil_CCS), [`chil_Auto_code_gen/`](chil_Auto_code_gen), [`SS_Belgrade_25/`](SS_Belgrade_25)** — proyectos CHIL (Controller Hardware-in-the-Loop): un modelo esquemático de Typhoon emparejado con código C de control auto-generado para DSPs TI F2837x/F28335, compilado/flasheado vía Code Composer Studio (CCS).
- **[`docs/`](docs)** — presentaciones y PDFs del curso que soporta este repositorio (modelado/control de VSC, instalación de CCS).
- **[`pss_design.ipynb`](pss_design.ipynb)** — notebook en la raíz para trabajo de diseño de controladores/estabilidad de sistemas de potencia.

## Tipos de archivo

| Extensión / patrón | Qué es |
|---|---|
| `.tse` | Proyecto de Typhoon Schematic Editor; fuente de verdad de un modelo. Cada uno tiene una carpeta `"<nombre> Target files/"` con los artefactos compilados. |
| `.cpd` | Binario del modelo compilado dentro de `"Target files/"`. Es lo que carga `hil.load_model()` en tiempo de ejecución — nunca apuntar al `.tse`. |
| `.cus` | Layout de panel SCADA/control de Typhoon. |
| `.runx` | Archivo de configuración/ejecución de Typhoon Control Center. |
| `.slx` | Modelo de Simulink. |
| carpetas `*_acg/` y archivos como `dq_unb_pi_vsg.c`/`.h` | Código de control auto-generado desde el esquemático de Typhoon. Regenerar desde Typhoon en lugar de editar a mano la lógica generada; `scheduler.c`, `serial.c`, `main.c` son el andamiaje (mayormente estático) del proyecto CCS alrededor del subsistema generado. |
| `.ccsproject` / `.cproject` / `.project` | Archivos de proyecto de Code Composer Studio (DSP de TI) para los targets CHIL (F28335, F2837xD). Compilar/flashear requiere CCS; nada aquí es compilable por línea de comandos. |

## Cómo trabajar en este repositorio

- No hay herramientas de lint/build/test a nivel raíz ni `requirements.txt`/`pyproject.toml` — tratar los archivos de proyecto de fabricante (`.tse`, `.cus`, `.runx`, `.slx`, proyectos CCS) como opacos y editarlos a través de su respectiva herramienta gráfica, no a mano.
- El único código pensado para editarse/extenderse directamente es `HIL_API/` (Python) y las fuentes C de CCS bajo las carpetas `*_acg`/proyectos CHIL — ver las notas por carpeta arriba para saber qué está generado y qué es mantenido a mano.
- `HIL_API/hil_simulation.py` automatiza la compilación `.tse` → `.cpd` vía `typhoon.api.schematic_editor` con `compile_if_needed()`; las compilaciones de DSP en CCS siguen requiriendo el IDE Code Composer Studio.
- Binarios compilados, DLLs, artefactos `.pickle`/`.dat`/`.bin`, `__pycache__` y `HIL_API/results/*.csv` son salidas generadas, no código fuente — no editarlos a mano.

## Empezando

Para ejecutar una simulación HIL/VHIL desde Python:

```powershell
cd HIL_API
python first_model_python.py
```

Detener con `Ctrl+C` — el bloque `finally` llama a `hil.stop_simulation()` de forma controlada. Ver [`HIL_API/CLAUDE.md`](HIL_API/CLAUDE.md) para el resto de comandos (dashboard interactivo, barrido paramétrico) y la referencia de la API.
