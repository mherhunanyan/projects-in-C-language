#include "types.h"

int calculateResult(Operands operands, Operation operation) {
  switch (operation)
  {
  case AND:
    return operands.first & operands.second;
  case OR:
    return operands.first | operands.second;
  case XOR:
    return operands.first ^ operands.second;
  case NOR:
    return ~(operands.first | operands.second);
  case LEFT_SHIFT:
    return operands.first << operands.second;
  case RIGHT_SHIFT:
    return operands.first >> operands.second;
  }
}