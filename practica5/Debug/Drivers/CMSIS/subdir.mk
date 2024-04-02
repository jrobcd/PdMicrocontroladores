################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/system_stm32f4xx.c 

OBJS += \
./Drivers/CMSIS/system_stm32f4xx.o 

C_DEPS += \
./Drivers/CMSIS/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/%.o Drivers/CMSIS/%.su Drivers/CMSIS/%.cyclo: ../Drivers/CMSIS/%.c Drivers/CMSIS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F429ZITx -DSTM32F4 -DNUCLEO_F429ZI -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Inc -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/CMSIS/Include" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/BSP/STM32F4xx_Nucleo_144" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/Core/Inc" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/API/INC" -I"/home/jroberto/Documents/PdMicrocontroladores1/practica5/Drivers/API/SRC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS

clean-Drivers-2f-CMSIS:
	-$(RM) ./Drivers/CMSIS/system_stm32f4xx.cyclo ./Drivers/CMSIS/system_stm32f4xx.d ./Drivers/CMSIS/system_stm32f4xx.o ./Drivers/CMSIS/system_stm32f4xx.su

.PHONY: clean-Drivers-2f-CMSIS

