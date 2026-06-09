import typhoon.api.hil as hil
import time

# Load compiled model using TyphoonSim (virtual HIL device, no hardware needed)
hil.load_model(
    file=r'C:\workspace\Typhoon_USE\Real_time_sim_VHIL\dq_current_ctrl_v3_vhil Target files\dq_current_ctrl_v3_vhil.cpd',
    offlineMode=False,
    vhil_device=True
)
print("Modelo cargado con éxito.")

# Start simulation
hil.start_simulation()
print("Simulación iniciada.")

# Programar cierre del contactor Plant.S1
sim_step = hil.get_sim_step()
close_at = 1.0  # segundos de simulación
execute_at = sim_step * int(close_at / sim_step)
hil.set_contactor('Plant.S1', swControl=True, swState=False, executeAt=None)   # inicialmente abierto
hil.set_contactor('Plant.S1', swControl=True, swState=True,  executeAt=execute_at)  # cerrar a los close_at s
print(f"Contactor Plant.S1 programado para cerrar a t={execute_at:.4f} s  (sim_step={sim_step} s)")

try:
    print("Leyendo señales... Pulsa Ctrl+C para detener.")
    while True:
        sim_time    = hil.get_sim_time()
        voltage_val = hil.read_analog_signal(name="Plant.VDC")
        # software_value refleja el último comando enviado, no el estado actual del circuito.
        # Inferimos el estado real a partir del tiempo de simulación.
        contactor_state = "Closed" if sim_time >= execute_at else "Opened"
        print(f"t={sim_time:.2f} s  |  Tensión = {voltage_val} V  |  Plant.S1 = {contactor_state}")
        time.sleep(1)

except KeyboardInterrupt:
    print("\nInterrumpido por el usuario.")

finally:
    # Detener la simulación (siempre en un bloque finally para asegurar el apagado)
    hil.stop_simulation()
    print("Simulación detenida correctamente.")
