#include "types.h"
#include <stdbool.h>

bool isFull(Stack* stack) {
    return stack->size == stack->capacity;
}