#include <stdio.h>
#include "types.h"

void print(DynamicArray* dynamicArray) {
  printf("\n");
  printf("Size: %d\n", dynamicArray->size);
  printf("Capacity: %d\n", dynamicArray->capacity);
  printf("Elements: [");

  for (int i = 0; i < dynamicArray->size; ++i) {
      printf("%d", dynamicArray->arr[i]);
      if (i < dynamicArray->size - 1) {
        printf(", ");
      }
  }
  printf("]");

  printf("\n\n");
}

