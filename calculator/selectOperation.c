#include <stdio.h>
#include "types.h"

Operation selectOperation()
{
  Option options[] = {
      {AND, "AND"},
      {OR, "OR"},
      {XOR, "XOR"},
      {NOR, "NOR"},
      {LEFT_SHIFT, "Left Shift"},
      {RIGHT_SHIFT, "Right Shift"},
      {REPLAY, "Replay"},
      {EXIT, "Exit"},
  };

  printOptions(options, 8);
  int operation;
  while (1)
  {
    printf("Choose opeation: ");
    int status = readNumber(&operation, Decimal);
    if (validateOperation(status, operation))
    {
      break;
    }
    continue;
  }

  printf("\n");

  return operation;
}
