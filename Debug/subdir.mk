################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../victim.cpp \
../victimTest.cpp \
../virus1.cpp \
../virus2.cpp 

OBJS += \
./victim.o \
./victimTest.o \
./virus1.o \
./virus2.o 

CPP_DEPS += \
./victim.d \
./victimTest.d \
./virus1.d \
./virus2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


