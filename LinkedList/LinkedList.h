#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */

/* Element list linier */
typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    infotype info;
    address next;
} ElmtList;

void initiate(address *p);
void create(address *p);
void Tampil_List(address p);
void insert(address *p,infotype value);
void inc_rear(address *p, infotype value);

#endif