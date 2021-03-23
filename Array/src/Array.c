#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void Show(int []);

int main(void)
{
    // int a[4][3]={
    //    {26, 5, 7},
    //    {10, 3, 47},
    //    {6, 76, 8},
    //    {40, 4, 32}
    // };
    int a[3]={26, 5, 7};
    // Show(a);

    char str1[] = "a";
    char str2[] = "a b";

    int size1 = sizeof(str1);
    int size2 = sizeof(str2);

    char name[15];
    puts("What's your name?\n");
    gets(name);

    char arr1[3][5]={"Tom","Lily","James Lee"};
    char arr2[3][5];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
            arr2[i][j]=arr1[i][j];
    }
    for(int i=0;i<3;i++)
        printf("arr2[%d]=%s\n",i,arr2[i]);
    system("pause");
    return 0;
}

void Show(int To_Show[])
{
    // for(int i=0;i<4;i++)
    //     {
    //         for(int j=0;j<3;j++)
    //         {
    //             printf("%2d",To_Show[i][j]);
    //         }
    //         printf("\n");
    //     }
    int *tmp = To_Show;
    int *tmp0 = &To_Show;
    int tmp0_v = *(To_Show);
    int *tmp1 = &To_Show[1];
    int tmp1_v = *(To_Show+4);
    int *tmp2 = &To_Show[2];
    int tmp2_v = *(To_Show+8);
    
    
}