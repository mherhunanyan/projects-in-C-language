#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main() {
    Stack *stack = createStack(2);
    print(stack);

    // push / pop / peek
    for (int i = 0; i < 10; ++i)
    {
      printf("Push or Pop? push(1), pop(0): ");
      int isPush;
      scanf("%d", &isPush);
      if (isPush) {
        printf("Enter number for push: ");
        int num;
        scanf("%d", &num);
        push(stack, num);
      } else {
        pop(stack);
      }
      print(stack);
    }

    freeStack(stack);

    return 0;
}
