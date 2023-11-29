#include "types.h"
#include <stdio.h>

int getByIndex(DynamicArray *dynamicArray, int index) {
    if (index < 0 || index >= dynamicArray->size) {
        printf("Invalid index\n");
        return -1; 
    }
    return dynamicArray->arr[index];
}