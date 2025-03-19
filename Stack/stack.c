#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "../LinkedList/LinkedList.h"


void pop(address *p) {
    address temp;
    address prev;
    temp = *p;
    prev = *p;
    if (*p == NULL) {
        printf("Stack is not found");
        return;
    }

    if (next(temp) == Nil) {
        printf("%d", info(temp));
        free(temp);
        *p = Nil;  
        return;
    }

    while (next(temp) != Nil) {
        prev = temp;
        temp = next(temp);
    }
    next(prev) = Nil;
    printf("%d", info(temp));
    free(temp);
}