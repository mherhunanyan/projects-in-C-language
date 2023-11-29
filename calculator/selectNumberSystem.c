#include <stdio.h>
#include "types.h"

Bases selectNumberSystem()
{
  while (1)
  {
    Option options[] = {
        {Binary, "Binary"},
        {Decimal, "Decimal"},
        {Hexadecimal, "Hexadecimal"}};

    printOptions(options, 3);

    int inputSystem;
    int outputSystem;
    while (1)
    {
      printf("Choose number system for Input: ");
      int status = readNumber(&inputSystem, Decimal);
      if (validateNmuberSystem(status, inputSystem)) {
        break;
      }
      continue;
    }

    printf("\n");

    while (1)
    {
      printf("Choose number system for Output: ");
      int status = readNumber(&outputSystem, Decimal);
      if (validateNmuberSystem(status, outputSystem)) {
        break;
      }
      continue;
    }

    printf("\n");

    Bases bases = {inputSystem, outputSystem};
    return bases;
  }
}