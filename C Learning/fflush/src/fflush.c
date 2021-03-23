#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;
    char ch;

    
    printf("please enter an integer: ");
    scanf("%d",&num);
    fflush(stdin);
    printf("please enter an charactor: ");
    scanf("%c",&ch);
    printf("num = %d, ASCII of ch=%d\n", num , ch);
    system("pause");
    return 0;
    /* fflush example */
    
    
    // FILE * pFile;
    // pFile = fopen ("example.txt","r+");
    // if (pFile == NULL) perror ("Error opening file");
    // else 
    // {
    //     char mybuffer[80];
    //     fputs ("test a\n",pFile);
    //     fputs ("test a\n",pFile);
    //     fputs ("aaaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhhiiiiiiiiiii               jjjjjjjjjjkkkkkkkkkkllllllllllmmmmmmmmmmnnnnnnnnnnooooooooooppppppppppqqqqqqqqqqqrrrrrrrrrrssssssssssttttttttttuuuuuuuuuuvvvvvvvvvvwwwwwwwwwwxxxxxxxxxxyyyyyyyyyyzzzzzzzzzzz\n",pFile);
    //     fflush (pFile);    // flushing or repositioning required
    //     fgets (mybuffer,80,pFile);
    //     puts (mybuffer);
    //     fclose (pFile);
    // }
    // system("pause");
    // return 0;
}