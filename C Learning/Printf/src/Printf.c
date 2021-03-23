#include<stdlib.h>
#include<stdio.h>
int main(void)
{

    printf("顯示字元 %c\n", 'A');
    printf("顯示字元編碼 %d\n", 'A');
    printf("顯示字元編碼 %c\n", 65);    
    printf("顯示十進位整數 %d\n", 15);
    printf("顯示八進位整數 %o\n", 15);
    printf("顯示十六進位整數 %X\n", 15);
    printf("顯示十六進位整數 %x\n", 15);    
    printf("顯示科學記號 %E\n", 0.001234);    
    printf("顯示科學記號 %e\n", 0.001234);  
    printf("example:%6.2f\n", 19.234);
    printf("example:%-6.2f\n", 19.234);  
    printf("%*d\n", 1, 1);
    printf("%*d\n", 2, 1);
    printf("%*d\n", 3, 1);
    printf("%.*s\n", 3, "Justin");
    printf("%.*s\n", 5, "Justin");
    printf("%.*s\n", 7, "Justin");
    printf("請輸入數字：");
    int input;
    scanf("%d", &input);
    printf("你輸入的數字：%d\n", input);
    fflush(stdin); // 清除輸入緩衝區


    system("pause");
    return(0);
}
