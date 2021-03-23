#ifndef LINKLIST_H
#define LINKLIST_H
#include<stdlib.h>
#include<stdio.h>
typedef struct 
{
   int data;
   struct NODE *previousnode;
   struct NODE *nextnode; 
} NODE;

NODE* createLinklist(int*,int);
void insertNum(NODE*,int);
void deleteNum(NODE*,int);
void printLinklistNum(NODE*);
void freeLinklist(NODE*);
NODE* SearchNum(NODE*,int);
NODE* getFinalnode(NODE* );
// NODE* ReverseLinklist(NODE* );


#endif //LINKLIST_H