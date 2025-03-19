#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void initiate(address *p){
    for (int i = 3; i > 0; i--)
    {
        address q;
        create(&q);
        insert(&q,i);
        next(q) = *p;
        *p = q;
    }
}

void create(address *p)
{
   *p = (address)malloc(sizeof(ElmtList));
   if (*p == NULL){
    printf("Memory Allocation Failed \n");
    return;
   }
}

void insert(address *p,infotype value){
    (*p)->info = value;
    (*p)->next = Nil;
}

void Tampil_List(address p)
{
    if (p != NULL)
    {
        printf("|%d|", p->info);
        Tampil_List(p->next);
        return;
    }
}

void inc_rear(address *p, infotype value){
    address pNew = malloc(sizeof(ElmtList));
    info(pNew) = value;
    next(pNew) = Nil;
    if (*p == NULL){
        *p = pNew;
        return;
    }
    
    address temp = *p;
    while (next(temp) != Nil)
    {
        temp = next(temp);
    }
    next(temp) = pNew;
}