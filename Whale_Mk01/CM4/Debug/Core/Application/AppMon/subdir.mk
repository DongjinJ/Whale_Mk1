################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Application/AppMon/AppMon_M4.c 

OBJS += \
./Core/Application/AppMon/AppMon_M4.o 

C_DEPS += \
./Core/Application/AppMon/AppMon_M4.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Application/AppMon/%.o Core/Application/AppMon/%.su Core/Application/AppMon/%.cyclo: ../Core/Application/AppMon/%.c Core/Application/AppMon/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Application-2f-AppMon

clean-Core-2f-Application-2f-AppMon:
	-$(RM) ./Core/Application/AppMon/AppMon_M4.cyclo ./Core/Application/AppMon/AppMon_M4.d ./Core/Application/AppMon/AppMon_M4.o ./Core/Application/AppMon/AppMon_M4.su

.PHONY: clean-Core-2f-Application-2f-AppMon

