#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<fcntl.h>
#include<io.h>
#include<sys/stat.h>

#define MAX 80
#define SIZE 1000000
int main (void)
{
    // prog12_4
    // FILE *fptr;
    // char str[MAX];
    // int bytes;
    // fptr = fopen("output.txt","r");
    // while(!feof(fptr))
    // {
    //     bytes = fread(str,1,pow(2,8), fptr);
    //     if(bytes<MAX)
    //         str[bytes]='\0';
    //     printf("%s\n",str);
    // }
    // fclose(fptr);
    // system("pause");
    // return 0;

    // prog12_5
    char buffer[SIZE];
    int f1,f2,bytes;

    f1=open("welcome.txt",O_RDONLY | O_TEXT);
    f2=creat("output2.txt",S_IWRITE);

    if((f1!=-1)&&(f2!=-1))
    {
        while(!eof(f1))
        {
            bytes=read(f1,buffer,SIZE);
            write(f2,buffer,bytes);
        }
        close(f1);
        close(f2);
        printf("copy complete!\n");
    }
    else
        printf("open fail\n");
    system("pause");
    return 0;    
}
