# Dynamic Array

## How to build?

Using `make`:
```
make
```
or

Using `gcc`:
```
gcc main.c createDynamicArray.c deleteByIndex.c deleteByValue.c freeDynamicArray.c getByIndex.c push.c insert.c resizeCapacity.c print.c -o dynamic_array
```

## How to Run?
```
./dynamic_array
```

## How to use?

### DynamicArray struct
```c
typedef struct {
    int size;
    int capacity;
    int* arr;
} DynamicArray;
```

### Create dynamic array

`DynamicArray* createDynamicArray(int capacity)`
```c
DynamicArray *dynamicArray = createDynamicArray(1000);
```

### capacity 
Dynamic Array capacity

```c
dynamicArray->capacity
```


### size 
Dynamic Array size (elemetns count)

```c
dynamicArray->size
```


### Push 
Add a value to the end of the dynamic array.

`void push(DynamicArray *dynamicArray, int element)`
```c
push(dynamicArray, 123);
```

### deleteByIndex 
Deletes an item from the dynamic array by its index and shifts all elements to the left to fill the gap.

`void deleteByIndex(DynamicArray *dynamicArray, int index)`
```c
deleteByIndex(dynamicArray, 3);
```

### deleteByValue 
Deletes an item from the dynamic array based on its value and shifts all elements to the left to fill the gap. If the third argument is true, it removes all elements with the given value; if false, only the first occurrence is removed.

`void deleteByValue(DynamicArray* dynamicArray, int value, bool deleteAll)`
```c
deleteByValue(dynamicArray, 123, true);
```

### insert 
Inserts a value at the specified index in the dynamic array and shifts elements to the right to accommodate the new value.

`void insert(DynamicArray *dynamicArray, int index, int element)`
```c
insert(dynamicArray, 3, 123);
```

### getByIndex 
Returns the element from the dynamic array at the specified index.

`int getByIndex(DynamicArray *dynamicArray, int index)`
```c
int value = getByIndex(dynamicArray, 3);
```


### resizeCapacity
Modify the capacity of the dynamic array.

`void resizeCapacity(DynamicArray *dynamicArray, int capacity)`
```c
resizeCapacity(dynamicArray, 1000);
```


### print
Print dynamic array information in this format:

`void print(DynamicArray* dynamicArray)`
```c
print(dynamicArray);
```
```
Size: 5
Capacity: 8
Elements: [1, 2, 3, 4, 5]
```

### freeDynamicArray
Release the memory allocated to the dynamic array.

`void freeDynamicArray(DynamicArray *dynamicArray)`
```c
freeDynamicArray(dynamicArray);
```








