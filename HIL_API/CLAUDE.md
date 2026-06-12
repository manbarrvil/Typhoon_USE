# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Running the simulation script

```powershell
python first_model_python.py
```

Stop with `Ctrl+C` — the `finally` block calls `hil.stop_simulation()` cleanly.

Dependencies: `pip install pandas` (required internally by `typhoon.api.hil`).

## Architecture

Python scripts drive Typhoon HIL simulations via `typhoon.api.hil`. The standard loop pattern:

```python
import typhoon.api.hil as hil
hil.load_model(file=r'path\to\model.cpd', offlineMode=False, vhil_device=True)
hil.start_simulation()
try:
    while True:
        sim_time = hil.get_sim_time()
        val = hil.read_analog_signal(name="Plant.VDC")
        ...
except KeyboardInterrupt:
    pass
finally:
    hil.stop_simulation()
```

**Model files:** `hil.load_model()` requires the compiled `.cpd` binary (in `*Target files\`), not the `.tse` schematic source. The active model is:
`C:\workspace\Typhoon_USE\Real_time_sim_VHIL\dq_current_ctrl_v3_vhil Target files\dq_current_ctrl_v3_vhil.cpd`

A second compiled model (`3ph_rectifier.cpd`) is local to this folder.

**VHIL vs hardware:** `vhil_device=True` runs TyphoonSim (pure software, no physical HIL device). Without this flag the API looks for real hardware and fails.

**VHIL speed:** TyphoonSim runs at roughly 0.1× real time for this model (`sim_step = 1 µs`). Reaching t = 1 simulation second takes ~10 real seconds.

## Key API reference

Source: https://www.typhoon-hil.com/documentation/typhoon-hil-api-documentation/hil_api.html

### Simulation lifecycle

| Call | Returns | Notes |
|------|---------|-------|
| `hil.load_model(file, offlineMode=False, vhil_device=False)` | `True/False` | Must be called before anything else |
| `hil.start_simulation()` | `True/False` | Call after model load and parameter setup |
| `hil.stop_simulation()` | `True/False` | Can be called at any time |
| `hil.is_simulation_running()` | `True/False/None` | `None` if model not loaded |

### Time

| Call | Returns |
|------|---------|
| `hil.get_sim_time()` | Elapsed simulation time (float, seconds) |
| `hil.get_sim_step()` | Simulation time step (float, seconds; e.g. `1e-6`) |

### Signal reading

| Call | Returns |
|------|---------|
| `hil.read_analog_signal(name='')` | `float` or `None` on error |
| `hil.read_analog_signals(signals=())` | list of floats or `None` |
| `hil.read_digital_signal(name='', device=None)` | `int` (0/1) or `None` |
| `hil.read_digital_signals(signals=())` | list of ints or `None` |

### Contactor control

```python
hil.set_contactor(name, swControl=None, swState=None, executeAt=None)
# swControl=True  → software control mode
# swState=True    → close contactor; False → open
# executeAt       → simulation time in seconds (None = immediate)

hil.set_contactor_control_mode(name, swControl=False, executeAt=None)
hil.set_contactor_state(name, swState=False, executeAt=None)  # only works in software control mode
hil.get_contactor_settings(name)  # returns dict with 'software_value', etc.
```

**Important:** `get_contactor_settings()["software_value"]` returns the **last commanded** state, not the real-time circuit position. To display the actual state, infer from simulation time:

```python
contactor_state = "Closed" if hil.get_sim_time() >= execute_at else "Opened"
```

### Timed command pattern (`executeAt`)

All timed commands accept `executeAt` in simulation seconds. Align to the simulation step to avoid floating-point misalignment:

```python
sim_step  = hil.get_sim_step()
execute_at = sim_step * int(target_seconds / sim_step)
```

### Source control

```python
hil.set_source_constant_value(name, value, executeAt=None, ramp_time=0, ramp_type='lin')
hil.set_source_sine_waveform(name, rms, frequency, phase, executeAt=None, ramp_time=0, ramp_type='lin')
# ramp_type: 'lin' (linear) or 'exp' (first-order, ramp_time ≈ 7τ)
```

Batch source updates (activate multiple sources simultaneously):
```python
hil.prepare_source_constant_value(name, value)   # queue — does not activate
hil.update_sources(sources=[name1, name2], executeAt=None)  # activate all at once
```

### Model variables

```python
hil.model_write('Component.variable', new_value)  # raises HILAPIException on error
hil.model_read('Component.variable')              # returns int/float
```

### Data logging

```python
hil.add_data_logger(name, signals=[], data_file='out.csv')
hil.start_data_logger(name)
hil.stop_data_logger(name)
hil.remove_data_logger(name)
```

### Waveform capture

```python
buf = []
hil.start_capture(
    cpSettings=[decimation, n_channels, n_samples, enable_digital],
    trSettings=[trigType, trigSource, threshold, edge, offset, useFirst],
    chSettings=[[analog_signals], [digital_signals]],
    dataBuffer=buf, fileName='capture.csv'
)
# buf is populated as (signalNames, yDataMatrix, xData) when done
while hil.capture_in_progress():
    time.sleep(0.1)
```

Valid `trigType` values: `"Analog"`, `"Digital"`, `"Forced"` (immediate, no condition).
Valid `edge` values: `"Rising edge"`, `"Falling edge"`.
For `"Forced"` trigger pass only `trSettings=['Forced']` — remaining parameters are ignored and cause a warning if provided.

### Analog/digital outputs (physical HIL only)

```python
hil.set_analog_output(channel, name=None, scaling=None, offset=None, device=0)
hil.set_digital_output(channel, name=None, invert=None, swControl=None, value=None, device=0)
hil.set_digital_output_software_value(channel, value=0, device=0)  # no effect in hardware mode
```

### Machine / motor

```python
hil.set_machine_constant_torque(name, value, executeAt=None)   # Nm
hil.set_machine_speed(name, speed, executeAt=None)             # rad/s; requires "Speed" load type
hil.set_machine_load_type(name, torque=True)                   # switching resets torque values
hil.set_machine_initial_angle(name, angle)                     # radians
hil.set_machine_initial_speed(name, speed)                     # rad/s
```

### Debugging

```python
hil.set_debug_level(level)  # 1=user only, 2=+API messages, 3=+comms
hil.is_simulation_running()  # quick health-check
```
