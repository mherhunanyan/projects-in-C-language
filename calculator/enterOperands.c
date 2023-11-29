#include <stdio.h>
#include "types.h"

Operands enterOperands(Bases bases, Operation operation)
{
  int first;
  while (1)
  {
    printf("Enter first operand: ");
    int status = readNumber(&first, bases.input);
    if (validateOperand(status, first, bases.input, operation, FIRST_POSITION))
    {
      break;
    }
    continue;
  }

  printf("\n");

  int second;
  while (1)
  {
    printf("Enter second operand: ");
    int status = readNumber(&second, bases.input);
    if (validateOperand(status, second, bases.input, operation, SECOND_POSITION))
    {
      break;
    }
    continue;
  }

  Operands operands = {first, second};
  return operands;
}
