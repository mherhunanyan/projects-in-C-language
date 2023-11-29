#include "types.h"

void deleteByIndex(DynamicArray* dynamicArray, int index) {
    if (index < 0 || index >= dynamicArray->size) {
        // invalid index
        return;
    }

    for (int i = index; i < dynamicArray->size - 1; i++) {
        dynamicArray->arr[i] = dynamicArray->arr[i + 1];
    }

    dynamicArray->size--;

    // shrink to a smaller size if less than a quarter of the array is used shrink to a smaller size if less than a quarter of the array is used
    if (dynamicArray->size > 0 && dynamicArray->size <= dynamicArray->capacity / 4) {
        resizeCapacity(dynamicArray, dynamicArray->capacity / 2);
    }
}