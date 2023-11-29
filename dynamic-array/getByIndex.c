#include "types.h"

int getByIndex(DynamicArray *dynamicArray, int index) {
    if (index < 0 || index >= dynamicArray->size) {
        // invalid index, return -1
        return -1; 
    }
    return dynamicArray->arr[index];
}