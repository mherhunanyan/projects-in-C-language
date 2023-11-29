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

- **Step 1**: User selects the number system (2, 10, 16) for input. After successful entry, proceed to **Step 2**.

- **Step 2**: User selects the number system (2, 10, 16) for output. After successful entry, proceed to **Step 3**.

- **Step 3**: User selects the operation (AND, OR, XOR, NOR, Left Shift, Right Shift, Replay, Exit). After a successful entry, proceed to **Step 4** for bitwise operations, return to **Step 1** for Replay, or go to **Step 8** to Exit.

- **Step 4**: User enter the first operand(value). After a successful entry, proceed to **Step 5**

- **Step 5**: User enter the second operand(value). After a successful entry, proceed to **Step 6**

- **Step 7**: The application calculates and displays the result. Proceed to **Step 3**

- **Step 8**: Exit application
