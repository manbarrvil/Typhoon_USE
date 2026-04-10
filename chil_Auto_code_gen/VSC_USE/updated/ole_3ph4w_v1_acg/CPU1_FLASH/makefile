SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1230/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS

GEN_OPTS__FLAG :=
GEN_CMDS__FLAG :=

ORDERED_OBJS += \
"./F2837xD_CodeStartBranch.obj" \
"./F2837xD_DefaultISR.obj" \
"./F2837xD_usDelay.obj" \
"./F2837xD_Adc.obj" \
"./F2837xD_Gpio.obj" \
"./F2837xD_PieCtrl.obj" \
"./F2837xD_PieVect.obj" \
"./F2837xD_SysCtrl.obj" \
"./F2837xD_GlobalVariableDefs.obj" \
"./serial.obj" \
"./main.obj" \
"./scheduler.obj" \
"./ole_3ph4w_v1.obj" \
$(GEN_CMDS__FLAG) \
-l../2837xD_FLASH_lnk_cpu1.cmd \
-lF2837xD_Headers_nonBIOS_cpu1.cmd \
-lrts2800_fpu32_eabi.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
EXE_OUTPUTS += \
ole_3ph4w_v1_acg.out \

EXE_OUTPUTS__QUOTED += \
"ole_3ph4w_v1_acg.out" \

CCS_PRJ_PLATFORM := LAUNCHXL-F28379D
TI_DEPS :=
BUILD_PLATFORM ?= not_defined

ifneq ($(BUILD_PLATFORM), not_defined)
ifneq ($(BUILD_PLATFORM), $(CCS_PRJ_PLATFORM))
$(error Platforms not matching:$(CCS_PRJ_PLATFORM), aborting)
endif
endif

# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory "ole_3ph4w_v1_acg.out" clean

# Tool invocations
ole_3ph4w_v1_acg.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"${CG_TOOL_ROOT}/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --fp_mode=relaxed --opt_for_speed=5 --opt_level=3 --define=DEBUG --define=_FLASH --define=CPU1 --define=_LAUNCHXL_F28379D --define=SCHEDULER --define=F28379D --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"ole_3ph4w_v1_acg.map" --advice:performance=all --warn_sections --heap_size=0x200 --stack_size=0x3F8 -i"C:/ti/ccs1230/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/lib" -i"C:/ti/ccs1230/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" -i"C:/ti/c2000/C2000Ware_5_04_00_00/device_support/f2837xd/headers/cmd" -i"C:/workspace/Typhoon_USE/Auto_code_gen/VSC_USE/updated/ole_3ph4w_v1_acg" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="ole_3ph4w_v1_acg_linkInfo.xml" --entry_point=code_start --rom_model -o "ole_3ph4w_v1_acg.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) "*.obj"
	-$(RM) "*.d_raw"
	-$(RM) "*.map"
	-$(RM) "*.d"
	-$(RM) "*.opt"
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
