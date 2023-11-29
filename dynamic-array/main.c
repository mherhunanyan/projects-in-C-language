#include "types.h"
#include <stdio.h>
#include <stdbool.h>

int main()
{
  DynamicArray *dynamicArray = createDynamicArray(2);
  print(dynamicArray);

  // push
  for (int i = 0; i < 5; ++i)
  {
    printf("Enter number for push: ");
    int num;
    scanf("%d", &num);
    push(dynamicArray, num);
    print(dynamicArray);
  }

  // insert
  for (int i = 0; i < 2; ++i)
  {
    printf("Enter index for insert: ");
    int index;
    scanf("%d", &index);

    printf("Enter value for insert: ");
    int value;
    scanf("%d", &value);

    insert(dynamicArray, index, value);

    print(dynamicArray);
  }

  // getByIndex
  for (int i = 0; i < 3; ++i)
  {
    printf("Enter index for getByIndex: ");
    int index;
    scanf("%d", &index);
    int value = getByIndex(dynamicArray, index);
    printf("%d\n", value);
  }

  // deleteByIndex
  for (int i = 0; i < 2; ++i)
  {
    printf("Enter index for deleteByIndex: ");
    int index;
    scanf("%d", &index);
    deleteByIndex(dynamicArray, index);
    print(dynamicArray);
  }

  // deleteByValue
  for (int i = 0; i < 2; ++i)
  {
    printf("Enter value for deleteByValue: ");
    int value;
    scanf("%d", &value);
    deleteByValue(dynamicArray, value, true);
    print(dynamicArray);
  }


  // freeDynamicArray
  freeDynamicArray(dynamicArray);

  return 0;
}