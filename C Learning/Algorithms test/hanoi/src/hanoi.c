#include<stdlib.h>
#include<stdio.h>
void hanoi(int, int, int, int);
void hanoi_mine(int , int*, int*, int*);

int main(void)
{

    hanoi(2,1,2,3);
    system("pause");
    return 0;
}
void hanoi(int n, int p1, int p2, int p3)
{
    if(n==1)
    {
        printf("%d->%d\n",p1,p3);
    }
    else
    {
        hanoi(n-1,p1,p3,p2);
        printf("%d->%d\n",p1,p3);
        hanoi(n-1,p2,p1,p3);
    }    
}

void hanoi_mine(int n,int* st,int* nd,int* rd)
{
    if(n==1)
    {

    }
    if(n==2)
    {

    }
}
