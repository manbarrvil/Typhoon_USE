SHELL = cmd.exe

F2837xD_DefaultISR.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_DefaultISR.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_Adc.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_Adc.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_Gpio.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_Gpio.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_PieCtrl.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_PieCtrl.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_PieVect.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_PieVect.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_SysCtrl.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_SysCtrl.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_GlobalVariableDefs.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/source/F2837xD_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_CodeStartBranch.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_usDelay.obj: C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/source/F2837xD_usDelay.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/common/include" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/workspace/Typhoon/Auto_code_gen/VSC_USE/updated/dq_power_ctrl_acg" --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '