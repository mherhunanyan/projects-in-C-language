# Multi-System Bitwise Calculator

## How to build?

Using `make`:
```
make
```
or

Using `gcc`:
```
gcc main.c calculateResult.c printOptions.c selectNumberSystem.c selectOperation.c enterOperands.c printResult.c readNumber.c validation.c -o calculator
```

## How to Run?
```
./calculator
```

## How it works?

- Select Number System: User chooses the number system for the calculation.

- Select Operation: User selects a bitwise operation or control action.

- Enter Operands: User inputs the operands for the calculation.

- Calculate and Display Result: The application calculates and displays the result.

- Repeat or Exit: The user can choose to perform another calculation or exit the application.