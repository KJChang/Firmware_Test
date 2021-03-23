#include<stdlib.h>
#include<stdio.h>
#include<time.h>

// int add(int, int);
double Power(double, double);
double Get_PI_Leibniz(int);
double Get_PI_Monticarlo(float);
double Rand_Range(float, float);

int main(void)
{
    // int sum, a=5, b=3;
    // sum = add(a,b);
    // printf("%d+%d=%d\n",a,b,sum);
    // system("pause");
    
    // srand( (unsigned)time( NULL ) );
    double PI_Lei = Get_PI_Leibniz(1E4);
    double PI_Mon = Get_PI_Monticarlo(1E8);
    return 0;
}

// int add(int num1, int num2)
// {
//     int a;
//     a=num1+num2;
//     num1 = a;
//     num2 = a;
//     return a;
// }

double Power(double base, double power)
{
    double result=1;
    for(int i=1;i<=power;i++)
    {
        result *= base;
    }
    return result;
}

double Get_PI_Leibniz(int n)
{
    double tmp=0;
    for(int i=1;i<=n;i++)
    {
        tmp+=Power(-1,(i-1))/(2*(double)i-1);
    }
    return 4*tmp;
}

double Get_PI_Monticarlo(float point_number)
{
    // struct point
    // {
    //     double x;
    //     double y;
    // };
    // point *pt = malloc(point_number);
    double x,y;
    int counter=0;
    for(int i=0;i<point_number;i++)
    {
        x=Rand_Range(0,1);
        y=Rand_Range(0,1);
        if(x*x+y*y<=1)
            counter+=1;
    }
    double PI = 4*(double)counter/(double)point_number;
    return PI;

}

double Rand_Range(float min, float max)
{
    double tmp = (double)rand();
    double tmp1 = (max-min);
    double tmp2 = (32767.0);
    double tmp3 = tmp*tmp1/tmp2;
    double tmp4 = tmp3+min;
    return tmp4;
}
