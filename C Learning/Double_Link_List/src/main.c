#include<stdlib.h>
#include<stdio.h>
#include"..\include\Linklist.h"

int main(void)
{
    NODE* DB_head;
    int array[5]={0,1,2,3,4};
    DB_head = createLinklist(array,5);
    // printLinklistNum(DB_head);
    NODE* DB_tail = getFinalnode(DB_head);
    // printLinklistNum(DB_tail);
    insertNum(DB_tail,5);
    // printLinklistNum(DB_head);
    deleteNum(DB_head,4);
    printLinklistNum(DB_head);
    
    system("pause");
    return 0;
}
// 最後耀回顧一下 typedef struct xxx {}; 是什麼