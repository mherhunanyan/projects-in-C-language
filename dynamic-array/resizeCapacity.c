#include <stdlib.h>
#include <stdio.h>
#include "types.h"

void resizeCapacity(DynamicArray *dynamicArray, int capacity) {
    int *temp = realloc(dynamicArray->arr, capacity * sizeof(int));
    if (temp) {
        dynamicArray->arr = temp;
        dynamicArray->capacity = capacity;
    } else {
        printf("Realloc error\n");
    }
}