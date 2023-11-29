#include <stdio.h>
#include "types.h"

int main() {
    printf("         ❤ Multi-System Bitwise Calculator ❤\n\n");

    Bases bases;
    Operation operation;
    Operands operands;
    int result;

    SelectNumberSystem:
      bases = selectNumberSystem();

    SelectOperation:
      operation = selectOperation();
      switch (operation)
      {
        case REPLAY:
          goto SelectNumberSystem;
        case EXIT:
          goto ExitApplication;
      }

    EnterOperands:
      operands = enterOperands(bases, operation);

    CalculateResult:
      result = calculateResult(operands, operation);

    PrintResult:
      printResult(result, bases.output);
      goto SelectOperation;

    ExitApplication:
      printf("Goodbye!❤\n");

    return 0;
}
