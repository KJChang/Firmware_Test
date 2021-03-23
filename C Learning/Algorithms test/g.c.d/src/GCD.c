#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    
    int Num1,Num2,tmpNum;
    Num1 = 55;
    Num2=50;
    if(Num1<Num2)
    {
        Num1=Num1;
    }
    else
    {
        tmpNum=Num2;
    }
    
    while(Num2 !=0)
    {
        tmpNum = Num1 % Num2;
        Num1 = Num2;
        Num2 = tmpNum;
    }

    printf("Num1 %d\n",Num1);
    printf("Num2 %d\n",Num2);
    printf("tmpNum %d\n",tmpNum);
    system("pause");
    return 0;
}