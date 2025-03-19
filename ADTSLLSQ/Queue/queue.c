#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "../LinkedList/LinkedList.h"


void dequeue(address *p){
    address prev;
    prev = *p;
    if (*p == NULL) {
        printf("Stack is not found");
        return;
    }
    *p = next(prev);
    next(prev) = Nil;
    printf("\n%d telah terlayani", info(prev));
    free(prev);
}
