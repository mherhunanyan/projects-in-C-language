#include "types.h"
#include <stdlib.h>
#include <stdio.h>

void resizeCapacity(Stack *stack, int capacity)
{
    int *temp = realloc(stack->arr, capacity * sizeof(int));
    if (temp)
    {
        stack->arr = temp;
        stack->capacity = capacity;
    }
    else
    {
        printf("Realloc error\n");
    }
}