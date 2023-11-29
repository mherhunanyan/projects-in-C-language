# Stack

## How to build?

Using `make`:
```
make
```
or

Using `gcc`:
```
gcc main.c createStack.c isEmpty.c isFull.c peek.c pop.c push.c resizeCapacity.c print.c freeStack.c -o stack
```

## How to Run?
```
./stack
```

## How to use?

### Stack struct
```c
typedef struct {
    int top;
    int capacity;
    int size;
    int *arr;
} Stack;
```

### Create stack

`Stack* createStack(int capacity)`
```c
Stack *stack = createStack(1000);
```

### top 
Stack top index

```c
stack->top
```

### capacity 
Stack capacity

```c
stack->capacity
```


### size 
Stack size (elemetns count)

```c
stack->size
```


### Push 
Add a value to the top of the stack.

`void push(Stack *stack, int item)`
```c
push(stack, 123);
```

### Pop
Remove and return the value from the top of the stack.

`int pop(Stack *stack)`
```c
int topValue = pop(stack);
```

### Peek
Return the value from the top of the stack without removing it

`int peek(Stack *stack)`
```c
int topValue = peek(stack);
```

### isFull
Return true if the stack's capacity is equal to its size.

`bool isFull(Stack* stack)`
```c
if (isFull(stack)) {
  printf("stack is full");
}
```


### isEmpty
Return true if the stack size is zero.

`bool isEmpty(Stack* stack)`
```c
if (isEmpty(stack)) {
  printf("stack is empty");
}
```

### resizeCapacity
Modify the capacity of the stack.

`void resizeCapacity(Stack *stack, int capacity)`
```c
resizeCapacity(stack, 1000);
```


### print
Print stack information in this format:

`void print(Stack* stack)`
```c
print(stack);
```
```
Top: 4
Top Element: 50
Size: 5
Capacity: 8
Elements: [10, 20, 30, 40, 50]
```

### freeStack
Release the memory allocated to the stack.

`void freeStack(Stack *stack)`
```c
freeStack(stack);
```






