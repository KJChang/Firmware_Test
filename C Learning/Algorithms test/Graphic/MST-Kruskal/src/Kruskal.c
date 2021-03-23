#include<stdlib.h>
#include<stdio.h>
#include <windows.h>
#define VERTS 6

struct edge
{
    int from,to;
    int find,val;
    struct edge* next;
};

typedef struct edge node;
typedef node* mst;
int v[VERTS+1];
mst findmincost(mst head)
{
    int minval=100;
    mst ptr,retptr;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->val<minval&&ptr->find==0)
        {
            minval=ptr->val;
            retptr=ptr;
        }
        ptr=ptr->next;
    }
    retptr->find=1;
    return retptr;
}

void mintree(mst head)
{
    mst ptr, mceptr;
    int i, result=0;
    ptr=head;

    for(i=0;i<=VERTS;i++)
        v[i]=0;
    
    while(ptr!=NULL)
    {
        mceptr=findmincost(head);
        v[mceptr->from]++;
        v[mceptr->to]++;
        if(v[mceptr->from]>1&&v[mceptr->to]>1)
        {
            v[mceptr->from]--;
            v[mceptr->to]--;
            result=1;
        }
        else
        {
            result=0;
        }
        if(result==0)
        {
            printf("Beginning vertex [%d] -> ending vertex [%d] -> lenght [%d] \n"
            ,mceptr->from,mceptr->to,mceptr->val);
            ptr=ptr->next;
        }
    }
}

int main(void)
{
    int data[10][3]={
        {1,2,6}, {1,6,12}, {1,5,10}, {2,3,3}, {2,4,5}, 
        {2,6,8/2}, {3,4,7}, {4,5,11}, {4,5,9}, {5,6,16} 
    };

    mst head,ptr,newnode;
    head=NULL;

    for(int i=0;i<10;i++)
    {
        for(int j=1;j<=VERTS;j++)
        {
            if(data[i][1]==j)
            {
                newnode=(mst)malloc(sizeof(node));
                newnode->from=data[i][0];
                newnode->to=data[i][1];
                newnode->val=data[i][2];
                newnode->find=0;
                newnode->next=NULL;
                if(head==NULL)
                {
                    head=newnode;
                    head->next=NULL;
                    ptr=head;
                }
                else
                {
                    ptr->next=newnode;
                    ptr=ptr->next;
                }
                
            }
        }
        
    }

    printf("-------------------------------------------------------\n");
    printf("Build the Minimum spreading tree\n");
    printf("-------------------------------------------------------\n");
    mintree(head);
    
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

