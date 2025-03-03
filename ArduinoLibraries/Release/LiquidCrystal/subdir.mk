################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../LiquidCrystal/LiquidCrystal.cpp 

OBJS += \
./LiquidCrystal/LiquidCrystal.o 

CPP_DEPS += \
./LiquidCrystal/LiquidCrystal.d 


# Each subdirectory must supply rules for building sources it contributes
LiquidCrystal/%.o: ../LiquidCrystal/%.cpp LiquidCrystal/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/home/michel/git/open-cdt-projects/ArduinoCore" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega325p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


