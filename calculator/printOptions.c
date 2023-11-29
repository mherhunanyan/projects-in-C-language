#include <stdio.h>
#include "types.h"

void printOptions(Option* options, int size) {
  for (int i = 0; i < size; ++i) {
    Option option = options[i];
    printf("%d. %s\n", option.value, option.title);
  }
}
