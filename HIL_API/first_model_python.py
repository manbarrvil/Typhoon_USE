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


startAC_triggered  = False
i_dq_ref_triggered = False

try:
    print("Leyendo señales... Pulsa Ctrl+C para detener.")
    while True:
        sim_time    = hil.get_sim_time()
        voltage_val = hil.read_analog_signal(name="Plant.VDC")
        is_d_ref    = hil.read_analog_signal(name="SCADA.is_d_ref")
        scada_id    = hil.read_analog_signal(name="SCADA.id")
        is_q_ref    = hil.read_analog_signal(name="SCADA.is_q_ref")
        scada_iq    = hil.read_analog_signal(name="SCADA.iq")
        contactor_state = "Closed" if scada_id != 0.0 else "Opened"

        if not startAC_triggered and sim_time >= 1.1:
            hil.set_scada_input_value('SCADA.startAC', 1)
            startAC_triggered = True
            print(f"t={sim_time:.2f} s  |  SCADA Input 'startAC' → 1")

        if startAC_triggered and not i_dq_ref_triggered and sim_time >= 1.5:
            hil.set_scada_input_value('SCADA.i_d_ref', 10)
            hil.set_scada_input_value('SCADA.i_q_ref', -10.0)
            i_dq_ref_triggered = True
            print(f"t={sim_time:.2f} s  |  SCADA Input 'i_d_ref' → 10 A  |  'i_q_ref' → -10.0 A")

        print(f"t={sim_time:.2f} s  |  Tensión = {voltage_val:.2f} V  |  SCADA.is_d_ref = {is_d_ref:.2f} A  |  SCADA.id = {scada_id:.2f}  |  SCADA.is_q_ref = {is_q_ref:.2f} A  |  SCADA.iq = {scada_iq:.2f}  |  Plant.S1 = {contactor_state}")
        time.sleep(1)

except KeyboardInterrupt:
    print("\nInterrumpido por el usuario.")

finally:
    # Detener la simulación (siempre en un bloque finally para asegurar el apagado)
    hil.stop_simulation()
    print("Simulación detenida correctamente.")
