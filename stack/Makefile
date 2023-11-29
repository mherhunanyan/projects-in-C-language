# Compiler
CC = gcc

# Source files
SRC = main.c createStack.c isEmpty.c isFull.c peek.c pop.c push.c resizeCapacity.c print.c freeStack.c

# Build target
TARGET = stack

# Default target
all: $(TARGET)

# Rule for building the stack
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

# Phony targets for clean
.PHONY: clean

# Rule for clean
clean:
	rm -f $(TARGET)
