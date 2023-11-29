#include "types.h"

void push(Stack *stack, int item) {
    if (isFull(stack)) {
      resizeCapacity(stack, stack->capacity * 2);
    }
    stack->top++;
    stack->size++;
    stack->arr[stack->top] = item;
}