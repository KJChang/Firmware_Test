#include<stdlib.h>
#include<stdio.h>

float pow(float x,float y)
{
    if(y==1)
    {
        return x;
    }
    else
    {
        return x*pow(x,y-1);
    }

}

int main(void)
{
    float x,y;
    x=5;y=5;
    printf("x^y= %f\n",pow(x,y));
    
    system("pause");
    return 0;
}