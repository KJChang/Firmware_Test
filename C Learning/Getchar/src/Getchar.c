#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("please enter a charater");
    ch = getchar();
    printf("The charater inputed is ");
    putchar(ch);
    putchar('\n');

    printf("pleas enter a charater");
    ch = getche();
    printf("The enter is: %c\n",ch);

    printf("pleas enter a charater");
    ch = getch();
    printf("The enter is: %c\n",ch);


    system("pause");
    return 0;
}