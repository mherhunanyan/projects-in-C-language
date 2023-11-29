#ifndef TYPES_H
#define TYPES_H
#include <stdbool.h>

typedef struct {
    int size;
    int capacity;
    int* arr;
} DynamicArray;

DynamicArray* createDynamicArray(int capacity);
void print(DynamicArray* dynamicArray);
void push(DynamicArray *dynamicArray, int element);
void insert(DynamicArray *dynamicArray, int index, int element);
void deleteByIndex(DynamicArray *dynamicArray, int index);
void deleteByValue(DynamicArray* dynamicArray, int value, bool deleteAll);
int getByIndex(DynamicArray *dynamicArray, int index);
void resizeCapacity(DynamicArray *dynamicArray, int capacity);
void freeDynamicArray(DynamicArray *dynamicArray);

#endif
