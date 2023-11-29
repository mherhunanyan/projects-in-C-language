#include <stdlib.h>
#include "types.h"

void freeStack(Stack *stack) {
  free(stack->arr);
  free(stack);
}