#include<stdlib.h>
#include<stdio.h>
#include <windows.h>\

typedef struct list
{
    int val;
    struct lis *next;
}node;
typedef node *link;
struct list* head[9];
int run[9];

void dfs(int current)
{
    link ptr;
    run[current]=1;
    printf("[%d] ",current);
    ptr=head[current]->next;
    while(ptr!=NULL)
    {
        if(run[ptr->val]==0)
            dfs(ptr->val);
        ptr=ptr->next;
    }
}
int main(void)
{
    link ptr, newnode;
    int data[20][2]={
        {1,2}, {2,1}, {1,3}, {3,1}, {2,4},
        {4,2}, {2,5}, {5,2}, {3,6}, {6,3},
        {3,7}, {7,3}, {4,8}, {8,4}, {5,8},
        {8,5}, {6,8}, {8,6}, {8,7}, {7,8}
    };

    for(int i=1;i<=8;i++)
    {
        run[i];
        head[i]=(link)malloc(sizeof(node));
        head[i]->val=i;

        head[i]->next=NULL;
        ptr=head[i];
        for(int j=0;j<20;j++)
        {
            if(data[j][0]==i)
            {
                newnode=(link)malloc(sizeof(node));
                newnode->val=data[j][1];
                newnode->next=NULL;
                do
                {
                    ptr->next=newnode;
                    ptr=ptr->next;
                }while(ptr->next!=NULL);
            }
        }
        
    }
    printf("The connection of the gragh\n");
    for(int i=1;i<=8;i++)
    {
        ptr=head[i];
        printf("vertex %d=> ",i);
        ptr=ptr->next;
        while(ptr!=NULL)
        {
            printf("[%d] ",ptr->val);
            ptr=ptr->next;
        }
        printf("\n");
    }
    printf("dfs:\n");
    dfs(1);
    printf("\n");

    LARGE_INTEGER t1, t2, ts;
    QueryPerformanceFrequency(&ts);
    QueryPerformanceCounter(&t1);
    // ------------------------------
    
    //-------------------------------
    QueryPerformanceCounter(&t2);
    
    printf("Lasting Time: %lf\n",(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart));
    system("pause");
    return 0;
}

