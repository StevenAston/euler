################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/bigint/BigInteger.o \
../src/bigint/BigIntegerAlgorithms.o \
../src/bigint/BigIntegerUtils.o \
../src/bigint/BigUnsigned.o \
../src/bigint/BigUnsignedInABase.o \
../src/bigint/sample.o 

CC_SRCS += \
../src/bigint/BigInteger.cc \
../src/bigint/BigIntegerAlgorithms.cc \
../src/bigint/BigIntegerUtils.cc \
../src/bigint/BigUnsigned.cc \
../src/bigint/BigUnsignedInABase.cc \
../src/bigint/sample.cc \
../src/bigint/testsuite.cc 

OBJS += \
./src/bigint/BigInteger.o \
./src/bigint/BigIntegerAlgorithms.o \
./src/bigint/BigIntegerUtils.o \
./src/bigint/BigUnsigned.o \
./src/bigint/BigUnsignedInABase.o \
./src/bigint/sample.o \
./src/bigint/testsuite.o 

CC_DEPS += \
./src/bigint/BigInteger.d \
./src/bigint/BigIntegerAlgorithms.d \
./src/bigint/BigIntegerUtils.d \
./src/bigint/BigUnsigned.d \
./src/bigint/BigUnsignedInABase.d \
./src/bigint/sample.d \
./src/bigint/testsuite.d 


# Each subdirectory must supply rules for building sources it contributes
src/bigint/%.o: ../src/bigint/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


