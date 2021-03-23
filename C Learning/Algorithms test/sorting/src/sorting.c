#include<stdlib.h>
#include<stdio.h>
#include <windows.h>
#include <stdint.h>
void show_array(int *, int);
void bubble_sort(int *,int);
void selection_sort(int *, int);
void insert_sort(int *,int);
void shell_sort(int*,int);
void quick_sort(int*, int, int, int);
void radix_sort(int*, int);
int process=0;
int bitshow(int x)
{
    int n = 1;
    if (x >> 16 == 0){n = n + 16; x = x << 16;}
    if (x >> 24 == 0){n = n + 8; x = x << 8;}
    if (x >> 28 == 0){n = n + 4; x = x << 4;}
    if (x >> 30 == 0){n = n + 2; x = x << 2;}
    if (x >> 31 == 0){n = n + 1;}
    return n;
};

typedef union{
    long i;
    char c[4];
} TestEndian;

void reverse(char *str){
    int i,j;
    char c;
    for (i = 0, j = strlen(str)-1;i<j;i++,j--){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}


int main(void)
{
    int testing_array[10]={100,25,39,27,12,8,45,63,25,25};
    int original_arr[8]={16,25,39,27,12,8,45,63};
    LARGE_INTEGER t1, t2, ts;
    QueryPerformanceFrequency(&ts);
    QueryPerformanceCounter(&t1);
    // ------------------------------
    // for(int i=0;i<10000;i++)
    {
        // for(int j=0;j<sizeof(testing_array)/sizeof(int);j++) testing_array[j]=original_arr[j];
        // bubble_sort(testing_array,sizeof(testing_array)/sizeof(int));
        // selection_sort(testing_array,sizeof(testing_array)/sizeof(int));
        // insert_sort(testing_array,sizeof(testing_array)/sizeof(int));
        // shell_sort(testing_array,sizeof(testing_array)/sizeof(int));
        // quick_sort(testing_array,sizeof(testing_array)/sizeof(int),0,sizeof(testing_array)/sizeof(int)-1);
        // radix_sort(testing_array,sizeof(testing_array)/sizeof(int));
        // printf("%d \n",bitshow(1*2*2*2*2*2+23));
        // uint32_t a =0x12345678;


        // uint32_t *p;


        // p = &a;

        // printf("%x\n" ,a);
        
        // printf("%p\n" ,p);
        // // printf("%x\n" ,*(p));
        // printf("%p\n" ,p+1);
        // // printf("%x\n" ,*(p+1));
        TestEndian un;
        un.i = 0x12345678;
        printf("%p\n",&un.c[0]);
        printf("%p\n",&un.c[1]);
        printf("%p\n",&un.c[2]);
        printf("%p\n",&un.c[3]);
        if (un.c[0] == 0x12 && un.c[1] == 0x34 && un.c[2] == 0x56 && un.c[3] == 0x78){
            printf("Big Endian");
        }else if (un.c[3] == 0x12 && un.c[2] == 0x34 && un.c[1] == 0x56 && un.c[0] == 0x78){
            printf("Little Endian");
        }else{
            printf("Unknown Endian");
        }

    }
    //-------------------------------
    QueryPerformanceCounter(&t2);
    // show_array(testing_array,sizeof(testing_array)/sizeof(int));
    printf("Lasting Time: %lf\n",(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart));
    system("pause");
    return 0;
}
void show_array(int* data, int array_size)
{
    for(int i=0;i<array_size;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}
void bubble_sort(int* data, int array_size)
{
    for(int i=array_size-1;i>=0;i--)
    {
        for(int j=0;j<i+1;j++)
        {
            int tmp;
            if(data[j]>data[i])
            {
                tmp=data[j];
                data[j]=data[i];
                data[i]=tmp;
            }
        }
        // printf("The %d times sorting\n",8-i);
        // for(int i=0;i<array_size;i++)
        // {
        //     printf("%d ",data[i]);
        // }
        // printf("\n");
    }
}

void selection_sort(int *data,int array_size)
{
    for(int i=0;i<array_size;i++)
    {
        for(int j=i+1;j<array_size;j++)
        {
            if(data[i]>data[j])
                {
                    int tmp = data[i];
                    data[i]=data[j];
                    data[j]=tmp;
                }
        }
    }
}
void insert_sort(int *data,int array_size)
{
    for(int i=1;i<array_size;i++)
    {
        int tmp=data[i]; //16,25,39,27,12,8,45,63
        int j=i-1;
        while(j>=0 && tmp<data[j])
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=tmp;
        // show_array(data,array_size);
    }
}
void shell_sort(int *data,int array_size)
{
    int data_show[8];
    int jmp=array_size/2;
    while(jmp != 0)
    {
        for(int i=jmp;i<array_size;i++)
        {
            int tmp=data[i];
            int j=i-jmp;
            while(tmp<data[j] && j>=0)
            {
                data[j+jmp]=data[j];
                j=j-jmp;
            }
            data[jmp+j]=tmp;
            
        }
        // show_array(data,array_size);
        jmp/=2;
    }
}

void quick_sort(int *data,int array_size, int lf, int rg)
{

    int lf_idx, rg_idx, t;

    if(lf<rg)
    {
        lf_idx=lf+1;
        rg_idx=rg;
        printf("--------------------\n");
step2:
        printf("[process %d]=> ",process++);
        for(t=0;t<array_size;t++)
        {
            printf("[%2d] ",data[t]);
        }
        printf("\n");
        for(int i=lf+1;i<=rg;i++)
        {
            if(data[i]>=data[lf])
            {
                lf_idx=i;
                break;
            }
            lf_idx++;
        }
        for(int j=rg;j>=lf+1;j--)
        {
            if(data[j]<data[lf])
            {
                rg_idx=j;
                break;
            }
            rg_idx--;
        }
        if(lf_idx<rg_idx)
        {
            int tmp = data[lf_idx];
            data[lf_idx] = data[rg_idx];
            data[rg_idx] = tmp;
    goto step2;
        }
        if(lf_idx>=rg_idx)
        {
            int tmp = data[lf];
            data[lf]=data[rg_idx];
            data[rg_idx]=tmp;
            quick_sort(data,array_size,lf,rg_idx-1);
            quick_sort(data,array_size,rg_idx+1,rg);
        }
    }

}

void radix_sort(int* data,int array_size)
{
    for(int n=1;n<100;n*=10)
    {
        int tmp[10][100]={0};
        for(int i=0;i<array_size;i++)
        {
            int m=(data[i]/n)%10;
            tmp[m][i]=data[i];
        }
        int k=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<array_size;j++)
            {
                if(tmp[i][j]!=0)
                {
                    data[k]=tmp[i][j];
                    k++;
                }
            }
        }

    }
}