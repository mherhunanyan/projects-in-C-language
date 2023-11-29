#include "types.h"

void push(DynamicArray* dynamicArray, int element) {
    if (dynamicArray->size == dynamicArray->capacity) {
        resizeCapacity(dynamicArray, dynamicArray->capacity * 2);
    }
    dynamicArray->arr[dynamicArray->size++] = element;
}