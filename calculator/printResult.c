#include <stdio.h>
#include "types.h"

void printBinary(int number)
{
  int i;
  printf("Result: 0b");
  for (i = 31; i >= 0; i--)
  {
    putchar((number & (1 << i)) ? '1' : '0');
  }
  printf("\n");
}

void printResult(int result, Base base)
{
  switch (base)
  {
  case Binary:
    printBinary(result);
    break;
  case Decimal:
    printf("Result: %d\n", result);
    break;
  case Hexadecimal:
    printf("Result: 0x%02X\n", result);
    break;
  }
  printf("\n\n");
}