#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>
int Sequential_Search(int * ,int ,int); // array , array size, target => id
int binary_search(int* ,int, int);// array, array size, target => id
int binary_search(int* ,int, int);// array, array size, target => id
int interpolation_search(int* ,int, int);// array, array size, target => id


int main(void)
{
    LARGE_INTEGER t1, t2, ts;
    double j=1;
    QueryPerformanceFrequency(&ts);
    QueryPerformanceCounter(&t1);
    //-------------------------------------------
    for (double i = 0; i < 100000; i++)
    {
        // if(5>1)
        // {

        // }
        j=j*1;
    }


    //-------------------------------------------
    QueryPerformanceCounter(&t2);
    printf("Lasting Time: %lf\n",(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart));
    system("pause");
    return 0;
}

int Sequential_Search(int * array,int array_size,int target)
{
    byte find=0;
    int place=-1;
    for(int i=0;i<array_size;i++)
    {
        if(array[i]==target)
        {
            find =1;
            place = array[i];
            return place;
            break;
        }
    }
    return -1;
}

int binary_search(int *array, int array_size, int target)
{
    int low_index=0, high_index=array_size-1;
    while(low_index<=high_index)
    {
        int mid = (low_index+high_index)/2;
        if(target>array[mid])
        {
            low_index=mid+1;
        }
        else if(target<array[mid])
        {
            high_index=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int interpolation_search(int *array, int array_size, int target)
{
    int low_index=0, high_index=array_size-1;
    while(low_index<=high_index)
    {
        int mid = low_index+(target-array[low_index])/(array[high_index]-array[low_index])*(high_index-low_index);
        if(target>array[mid])
        {
            low_index=mid+1;
        }
        else if(target<array[mid])
        {
            high_index=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}