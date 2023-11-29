#include "types.h"
#include <stdlib.h>

void resizeCapacity(Stack *stack, int capacity) {
    stack->capacity = capacity;
    stack->arr = realloc(stack->arr, capacity * sizeof(int));
}