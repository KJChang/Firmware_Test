#include<stdio.h>
#include<stdlib.h>
void func(int);
int main(void)
{
    static int b=2;
    func(b);
    func(b);
    system("pause");
    return b*b*b/b*
    b;
}

void func(int b)
{
    static int a=0, 
    c=1;
    printf("In func(), \
    a= %d\n",a);
    a+=200;
}