################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../NewSoftSerial/NewSoftSerial.cpp 

OBJS += \
./NewSoftSerial/NewSoftSerial.o 

CPP_DEPS += \
./NewSoftSerial/NewSoftSerial.d 


# Each subdirectory must supply rules for building sources it contributes
NewSoftSerial/%.o: ../NewSoftSerial/%.cpp NewSoftSerial/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/home/michel/Schreibtisch/beleg_embed/ArduinoCore/Release" -I"/home/michel/Schreibtisch/beleg_embed/ArduinoCore" -Wall -g2 -gstabs -Os -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega325p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


