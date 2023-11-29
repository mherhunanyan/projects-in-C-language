#include <stdio.h>
#include <string.h>
#include "types.h"

int validateNmuberSystem(int status, int base)
{
  if (!status || !(base == Binary || base == Decimal || base == Hexadecimal))
  {
    printf("Invalid choice. Please try again.\n");
    return 0;
  }
  return 1;
}

int validateOperation(int status, int operation)
{
  if (!status || operation < 1 || operation > 8)
  {
    printf("Invalid choice. Please try again.\n");
    return 0;
  }
  return 1;
}

int validateOperand(int status, int operand, Base base, Operation operation, OperandPosition operandPosition)
{
  if (!status)
  {
    char errorMessage[200];
    switch (base)
    {
    case Binary:
      strcpy(errorMessage, "Invalid number for Binary(2) base. Please try again using digits {0, 1} and start with the '0b' prefix (e.g. 0b1010).\n");
      break;
    case Decimal:
      strcpy(errorMessage, "Invalid number for Decimal(10) base. Please try again using digits {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} (e.g. 123).\n");
      break;
    case Hexadecimal:
      strcpy(errorMessage, "Invalid number for Decimal(10) base. Please try again using digits {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F} and start with the '0x' prefix (e.g. 0xF1).\n");
      break;
    }
    printf("%s", errorMessage);
    return 0;
  }

  if (operation == LEFT_SHIFT || operation == RIGHT_SHIFT)
  {
    if (operandPosition == FIRST_POSITION)
    {
      if (operand <= 0)
      {
        printf("Shift first operand must be a positive integer\n");
        return 0;
      }
    }
    if (operandPosition == SECOND_POSITION) {
      if (operand < 0 || operand > 31) {
        printf("The second operand of the shift must be in the range of 0 to 31.\n");
        return 0;
      }
    }
  }

  return 1;
}