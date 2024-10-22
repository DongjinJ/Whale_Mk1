################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Github/Whale_Mk1/Whale_Mk01/Common/Service/Sch/SchMain.c 

OBJS += \
./Common/Service/Sch/SchMain.o 

C_DEPS += \
./Common/Service/Sch/SchMain.d 


# Each subdirectory must supply rules for building sources it contributes
Common/Service/Sch/SchMain.o: D:/Github/Whale_Mk1/Whale_Mk01/Common/Service/Sch/SchMain.c Common/Service/Sch/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Common-2f-Service-2f-Sch

clean-Common-2f-Service-2f-Sch:
	-$(RM) ./Common/Service/Sch/SchMain.cyclo ./Common/Service/Sch/SchMain.d ./Common/Service/Sch/SchMain.o ./Common/Service/Sch/SchMain.su

.PHONY: clean-Common-2f-Service-2f-Sch

