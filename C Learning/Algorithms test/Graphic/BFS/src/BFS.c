#include<stdlib.h>
#include<stdio.h>
#include <windows.h>
#define MAXSIZE 10

int front=-1;
int rear=-1;

typedef struct list
{
    int x;
    struct list *next;
}node, *link;
// typedef struct list node;
// typedef node *link;

struct GraphLink
{
    link first;
    link last;
}Head[9];

int run[9];
int queue[MAXSIZE];

void insert(struct GraphLink *temp, int x)
{
    link newNode;
    newNode=(link)malloc(sizeof(link));
    newNode->x=x;
    newNode->next=NULL;
    if(temp->first==NULL)
    {
        temp->first=newNode;
        temp->last=newNode;
    }
    else
    {
        temp->last->next=newNode;
        temp->last=newNode;
    }
    
}

void enqueue(int value)
{
    if(rear>=MAXSIZE) return;
    rear++;
    queue[rear]=value;
}

int dequeue()
{
    if(front==rear) return -1;
        front++;
    return queue[front];
}

void bfs(int current)
{
    link tempnode;
    enqueue(current);
    run[current]=1;
    printf("[%d] ",current);
    while(front!=rear)
    {
        current=dequeue();
        tempnode=Head[current].first;
        while(tempnode!=NULL)
        {
            if(run[tempnode->x]==0)
            {
                enqueue(tempnode->x);
                run[tempnode->x]=1;
                printf("[%d] ",tempnode->x);
            }
            tempnode=tempnode->next;
        }
    }
}

void print(struct GraphLink temp)
{
    link current =temp.first;
    while(current!=NULL)
    {
        printf("[%d] ",current->x);
        current=current->next;
    }
    printf("\n");
}

int main(void)
{
    int Data[20][2]=
    {
        {1,2}, {2,1}, {1,5}, {5,1}, {2,4}, {4,2}, {2,3}, {3,2}, {3,4}, {4,3}, 
        {5,3}, {3,5}, {4,5}, {5,4}
    };

    int DataNum;
    printf("adjacent content:\n");
    for(int i=1;i<6; i++)
    {
        run[i]=0; // 其實只會用i =1~5
        printf("vertex %d=>",i);
        Head[i].first=NULL;
        Head[i].last=NULL;
        for(int j=0;j<20;j++)
        {
            if(Data[j][0]==i)
            {
                DataNum = Data[j][1];
                insert(&Head[i],DataNum);
            }
        }
        print(Head[i]);
    }
    
    printf("BFS:\n");
    bfs(1);
    printf("\n");
    system("pause");
    return 0;
}

