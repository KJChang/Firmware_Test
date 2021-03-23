#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    // int num;
    // printf("enter one number: \n");
    // scanf("%d",&num);

    // if(num>0)
    //     printf("%d is bigger than 0\n",num);
    
    // printf("Program is over!\n");

    // int num1, num2, larger;
    // printf("please enter 2 integers\n");
    // scanf("%d %d",&num1, &num2);
    
    // num1>num2 ? (larger=num1):(larger=num2);
    // printf("%d is bigger\n",larger);

    // int a, b;
    // char oper;
    // printf("a + b\n");
    // scanf("%d %c %d",&a, &oper, &b);

    // switch(oper)
    // {
    //     case '+':
    //         printf("%d+%d=%d\n", a,b,a+b);
    //         break;
    //     case '-':
    //         printf("%d-%d=%d\n", a,b,a-b);
    //         break;
    //     default:
    //         printf("Error\n");
    // }
    int start1;
    int i=0, sum=0;
    i:
    i++;
    sum+=i;
    printf("%d",i);
    if(i<10)
    {
        printf("+");
        goto i;
    }
    printf("=%d\n",sum);
    system("pause");
    return 0;
}