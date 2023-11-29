#include <stdio.h>
#include "types.h"

void print(Stack* stack) {
  printf("\n");
  printf("Top: %d\n", stack->top);
  printf("Top Element: %d\n", peek(stack));
  printf("Size: %d\n", stack->size);
  printf("Capacity: %d\n", stack->capacity);
  printf("Elements: [");

  for (int i = 0; i < stack->size; ++i) {
      printf("%d", stack->arr[i]);
      if (i < stack->size - 1) {
        printf(", ");
      }
  }
  printf("]");

  printf("\n\n");
}

