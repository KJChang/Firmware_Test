#include"..\include\Linklist.h"

NODE* createLinklist(int* arr,int array_num)
{
    NODE* start,* previous,* current; 
    for(int i=0;i<array_num;i++)
    {
        current = (NODE* ) malloc(sizeof(NODE));
        current->data = arr[i];

        if(i==0)
        {
            start = current;
            start->previousnode = NULL;
        }
        else 
        {
            previous->nextnode = current;
            current->previousnode = previous;
        }
        current->nextnode = NULL;
        previous = current;
    }
    return start;
}
void insertNum(NODE* insert_node,int insert_num)
{
    NODE *insert;
    insert = (NODE*) malloc(sizeof(NODE));
    insert->data = insert_num;
    insert->previousnode = insert_node->previousnode;
    insert->nextnode = insert_node->nextnode;

    insert_node->nextnode = insert;

}
void deleteNum(NODE* head_node,int delete_num)
{
    NODE *current_node;
    current_node = head_node;
    while(current_node->data != delete_num)
    {
        current_node = current_node->nextnode;
    }
    if(current_node->data == delete_num)
    {
        NODE *next_node = current_node->nextnode;
        current_node=current_node->previousnode;
        current_node->nextnode = next_node;
    }

}
void printLinklistNum(NODE* start_node)
{
    NODE * current;
    current = start_node;
    while(current != NULL)
    {
        printf("%d\n",current->data);
        current = current->nextnode;
    }
}
void freeLinklist(NODE* start_node)
{

}
NODE* SearchNum(NODE* start_node,int search_num)
{

}
NODE* getFinalnode(NODE* headnode)
{
    NODE* current;
    current = headnode;
    while(current->nextnode != NULL)
    {
        current = current->nextnode;
    }
    return current;
}