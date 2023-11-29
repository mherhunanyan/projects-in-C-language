#include <stdlib.h>
#include "types.h"

Stack* createStack(int capacity) {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->size = 0;
    stack->arr = malloc(capacity * sizeof(int));
    return stack;
}
