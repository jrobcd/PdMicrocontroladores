################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f429xx.s 

OBJS += \
./Startup/startup_stm32f429xx.o 

S_DEPS += \
./Startup/startup_stm32f429xx.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/CMSIS/Include" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/BSP/STM32F4xx_Nucleo_144" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Inc" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/Core/Inc" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/API/INC" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica4.1/Drivers/API/SRC" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f429xx.d ./Startup/startup_stm32f429xx.o

.PHONY: clean-Startup
