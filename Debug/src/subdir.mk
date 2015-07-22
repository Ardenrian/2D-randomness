################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/2D-randomness.cpp \
../src/IInteraction.cpp \
../src/IObject.cpp \
../src/Particle.cpp \
../src/Vector.cpp 

OBJS += \
./src/2D-randomness.o \
./src/IInteraction.o \
./src/IObject.o \
./src/Particle.o \
./src/Vector.o 

CPP_DEPS += \
./src/2D-randomness.d \
./src/IInteraction.d \
./src/IObject.d \
./src/Particle.d \
./src/Vector.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


