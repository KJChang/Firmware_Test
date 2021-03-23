#include<stdlib.h>
#include<stdio.h>

int main()
{
    // int i, sum=0;
    // for(i=0;i<=10;i++)
    // {
    //     sum+=i;
    // }

    char ch;
    while(ch!=17)
    {
        ch=getch();
        printf("ASCII of ch = %d\n",ch);
    }
    

    system("pause");
    return 0;
}