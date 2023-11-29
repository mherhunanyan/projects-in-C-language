# Compiler
CC = gcc

# Source files
SRC = main.c calculateResult.c printOptions.c selectNumberSystem.c selectOperation.c enterOperands.c printResult.c readNumber.c validation.c

# Build target
TARGET = calculator

# Default target
all: $(TARGET)

# Rule for building the calculator
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

# Phony targets for clean
.PHONY: clean

# Rule for clean
clean:
	rm -f $(TARGET)
