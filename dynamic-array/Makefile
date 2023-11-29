# Compiler
CC = gcc

# Source files
SRC = main.c createDynamicArray.c deleteByIndex.c deleteByValue.c freeDynamicArray.c getByIndex.c push.c insert.c resizeCapacity.c print.c

# Build target
TARGET = dynamic_array

# Default target
all: $(TARGET)

# Rule for building the dynamic_array
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

# Phony targets for clean
.PHONY: clean

# Rule for clean
clean:
	rm -f $(TARGET)
