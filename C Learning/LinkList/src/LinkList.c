#include"..\include\LinkList.h"

NODE *createList(int *arr, int len)
{
    NODE *first, *current, *previous;
    for(int i=0;i<len;i++)
    {
        current = (NODE *) malloc(sizeof(NODE));
        current->data = arr[i];
        if(i==0)
            first = current;
        else
        {
            previous->next = current;
        }
        current->next = NULL;
        previous=current;
    }
    return first;
}

void printList(NODE* first)
{
    NODE *node=first;
    if(first == NULL)
        printf("List is empty\n");
    else
    {
        while(node!=NULL)
        {
            printf("%3d\n",node->data);
            node=node->next;
        }
    }
}

void freeList(NODE * first)
{
    NODE  *current, *tmp;
    current = first;
    while(current!=NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }
}

NODE *searchNode(NODE *first,int item)
{
    NODE *node = first;
    while(node != NULL)
    {
        if(node -> data == item)
            return node;
        else
        {
            node = node->next;
        }
    }
    return NULL;
}

void insertNode(NODE *node,int item)
{
    NODE *newnode;
    newnode = (NODE *) malloc (sizeof(NODE));
    newnode->data = item;
    newnode->next = node->next;
    node->next = newnode;
}

NODE* deleteNode(NODE *first, NODE *node)
{
    NODE *pre_node = node;
    if(first == NULL || node == NULL)
    {
        printf("Nothing to delete!\n");
        return 0;
    }
    if(first == node)
        first=node->next;
    else
    {
        pre_node = first;
        while(pre_node->next != node)
        {
            pre_node=pre_node->next;
        }
        pre_node->next = node->next;
        free(node);
        return first;
    }
    
}