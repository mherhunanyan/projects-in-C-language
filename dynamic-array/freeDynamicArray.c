#include <stdlib.h>
#include "types.h"

void freeDynamicArray(DynamicArray *dynamicArray) {
  free(dynamicArray->arr);
  free(dynamicArray);
}