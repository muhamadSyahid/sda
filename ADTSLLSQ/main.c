#include "LinkedList/LinkedList.h"
#include "Queue/Queue.h"
#include "Stack/Stack.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    address first;
    first = Nil;

    /*Queue antri bank desimal*/
    printf("--Queue--\n\n");
    initiate(&first);
    printf("Antiannya sebagai berikut: ");
    Tampil_List(first);
    int n;
    printf("\nBerapa nasabah yang ingin ditambahkan: ");
    scanf("%d",&n);

    for (int i = 4; i < n+4; i++){
        int pick;
        printf("\nMasukan nasabah ke %d: ",i);
        scanf("%d",&pick);
        inc_rear(&first,pick);
    }
    printf("\nAntian baru sebagai berikut: ");
    Tampil_List(first);
    while (first != Nil)
    {
        dequeue(&first);
        printf("\nAntian baru sebagai berikut: ");
        Tampil_List(first);
        if (first == Nil){
            printf("Habis");
        }
    }
    printf("\nSemua nasabah terlayani\n");
    

    /*Stack:Binary*/
    printf("\n--Binary--");
    int bef_conv;
    printf("\nAngka yang akan di konversi: ");
    scanf("%d", &bef_conv);

    while (bef_conv > 0)
    {
        int result = bef_conv % 2;
        inc_rear(&first,result);
        bef_conv = bef_conv / 2;
    }
    Tampil_List(first);
    printf("\nHasil Binary = ");
    while (first != Nil)
    {
        pop(&first);
    }
    
    return 0;
}