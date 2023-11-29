#ifndef TYPES_H
#define TYPES_H
#include <stdbool.h>

typedef struct {
    int top;
    int capacity;
    int size;
    int *arr;
} Stack;

Stack* createStack(int capacity);
bool isFull(Stack* stack);
bool isEmpty(Stack* stack);
void resizeCapacity(Stack *stack, int capacity);
void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack *stack);
void print(Stack* stack);
void freeStack(Stack *stack);

#endif