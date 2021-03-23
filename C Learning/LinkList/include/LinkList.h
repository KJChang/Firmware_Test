#ifndef LINKLIST_H
#define LINKLIST_H
#include<stdlib.h>
#include<stdio.h>
typedef struct
{
    int data;
    struct node *next;
} NODE;

NODE *createList(int *,int); // array pointer, array len
void printList(NODE *);
void freeList(NODE *);
void insertNode(NODE *,int);
NODE *searchNode(NODE *,int);
NODE *deleteNode(NODE *,NODE *);

#endif //LINKLIST_H