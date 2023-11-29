#ifndef TYPES_H
#define TYPES_H

typedef enum
{
  Binary = 2,
  Decimal = 10,
  Hexadecimal = 16,
} Base;

typedef struct
{
  Base input;
  Base output;
} Bases;

typedef struct
{
  int first;
  int second;
} Operands;

typedef enum
{
  FIRST_POSITION = 1,
  SECOND_POSITION,
} OperandPosition;

typedef enum
{
  AND = 1,
  OR,
  XOR,
  NOR,
  LEFT_SHIFT,
  RIGHT_SHIFT,
  REPLAY,
  EXIT,
} Operation;

typedef struct
{
  int value;
  char title[50];
} Option;

int calculateResult(Operands operands, Operation operation);
void printOptions(Option *options, int size);
Bases selectNumberSystem();
Operation selectOperation();
Operands enterOperands(Bases bases, Operation operation);
void printResult(int result, Base base);
int readNumber(int *output, Base base);
int validateNmuberSystem(int status, int base);
int validateOperation(int status, int operation);
int validateOperand(int status, int operand, Base base, Operation operation, OperandPosition operandPosition);

#endif
