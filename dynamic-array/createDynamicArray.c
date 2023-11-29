#include "types.h"
#include <stdlib.h>

DynamicArray* createDynamicArray(int capacity) {
    DynamicArray *dynamicArray = malloc(sizeof(DynamicArray));
    dynamicArray->size = 0;
    dynamicArray->capacity = capacity;
    dynamicArray->arr = malloc(dynamicArray->capacity * sizeof(int));
    return dynamicArray;
}