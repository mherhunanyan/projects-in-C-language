#include "types.h"
#include <stdbool.h>

void deleteByValue(DynamicArray* dynamicArray, int value, bool deleteAll) {
    for (int i = 0; i < dynamicArray->size; i++) {
        if (dynamicArray->arr[i] == value) {
            deleteByIndex(dynamicArray, i);
            if (!deleteAll) {
              return;
            }
        }
    }
}