#include<stdlib.h>
#include<stdlib.h>
#include"..\include\LinkList.h"

int main(void)
{
    NODE *first, *node;
    int arr[] = {12,38,57};
    first = createList(arr,3);
    printList(first);

    node = searchNode(first,38);
    first = deleteNode(first,node);
    printList(first);

    first = deleteNode(first,first);
    printList(first);

    freeList(first);

    system("pause");
    system("pause");
    system("pause");
    return 0;
}