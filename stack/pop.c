#include "types.h"
#include <stdio.h>

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int item = stack->arr[stack->top];
    stack->top--;
    stack->size--;
    if (stack->size <= stack->capacity / 4) {
      resizeCapacity(stack, stack->capacity / 2);
    }
    return item;
}
