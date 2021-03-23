#include<iostream>
// #include<string>
// #include<vector>
// #include<stdlib.h>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;

typedef union
{
    long l;
    char chr[8];
}Fucking_Interview;
int main(void)
{
    int *p = new int(20);
    // delete p 是回收動態配置出來的 new int(20)，
    // 不是回收 p，p 仍然指在 new int(20) 原本的記憶體位址，p 是由系統自動管理
    delete p; 
    
    // 若 new int(20) 已回收，再使用 *p ，可能得到不可預期的結果
    printf("*p = %d \n", *p); 

    Fucking_Interview tmp;
    tmp.l = 0x12345678;
    
    printf("%x \n",tmp.chr[0]);
    // cout<<tmp.chr[0]<<endl;
    printf("%p \n",&tmp.chr[0]);
    printf("%x \n",tmp.chr[1]);
    printf("%p \n",&tmp.chr[1]);
    printf("%x \n",tmp.chr[2]);
    printf("%p \n",&tmp.chr[2]);
    printf("%x \n",tmp.chr[3]);
    printf("%p \n",&tmp.chr[3]);
    printf("wake\n");

    system("pause");
    return 0;
}

