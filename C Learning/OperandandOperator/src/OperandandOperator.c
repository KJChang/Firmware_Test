#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 0.0;
    short b =1;
    printf("sizeof(a+b)= %d\n",sizeof(a+b));
    int age = 14;
    printf("age = %d\n", age);
    age = age +1;
    printf("age + 1 = %d\n", age);
    system("pause");
    return 0;
}