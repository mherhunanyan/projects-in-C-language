#include <stdio.h>
#include "types.h"

void insert(DynamicArray *dynamicArray, int index, int element) {
    if (index < 0 || index > dynamicArray->size) {
        printf("Invalid index\n");
        return;
    }
    if (dynamicArray->size == dynamicArray->capacity) {
        resizeCapacity(dynamicArray, dynamicArray->capacity * 2);
    }

    for (int i = dynamicArray->size; i > index; i--) {
        dynamicArray->arr[i] = dynamicArray->arr[i - 1];
    }

    dynamicArray->arr[index] = element;
    dynamicArray->size++;
}
