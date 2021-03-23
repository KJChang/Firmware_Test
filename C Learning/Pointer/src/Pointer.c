#include<stdio.h>
#include<stdlib.h>
int *max(int*, int*);
int main(void)
{

    int test = malloc(1*sizeof(int));
    int *test1 = malloc(1*sizeof(int));
    int **test2=malloc(1*sizeof(int));
    char test_c = malloc(1*sizeof(char));
    char *test_c1 = malloc(1*sizeof(char));
    char **test_c2=malloc(1*sizeof(char));

    // printf("%d %p %d\n",test,test,sizeof(&test));
    // printf("%d %p %d %d\n",test1,test1,sizeof(&test1),sizeof(&(*test1)));
    // printf("%d %p %d %d %d\n\n",test2,test2,sizeof(test2),sizeof(*test2),sizeof(**test2));

    // printf("%d %p %d\n",test_c,test_c,sizeof(test_c));
    // printf("%d %p %d %d\n",test_c1,test_c1,sizeof(test_c1),sizeof((*test_c1)));
    // printf("%d %p %d %d %d\n",test_c2,test_c2,sizeof(test_c2),sizeof(*test_c2),sizeof(**test_c2));

    int *arr_test1d=malloc(2*sizeof(int));
    int **arr_test2d=malloc(2*sizeof(int*));
    arr_test2d[0]=malloc(2*sizeof(int));
    arr_test2d[1]=malloc(1*sizeof(int));
    arr_test2d[2]=malloc(1*sizeof(int));
    arr_test2d[0][0]=1;
    arr_test2d[0][1]=2;
    arr_test2d[1][0]=3;
    arr_test2d[2][0]=4;

    int **arr_test2d_f;
    arr_test2d_f=malloc(2*sizeof(int*));
    arr_test2d_f[0]=malloc(2*sizeof(int));
    arr_test2d_f[1]=malloc(1*sizeof(int));
    arr_test2d_f[2]=malloc(1*sizeof(int));
    arr_test2d_f[0][0]=1;
    arr_test2d_f[0][1]=2;
    arr_test2d_f[1][0]=3;
    arr_test2d_f[2][0]=4;

    int **arr_test2d_2;
    arr_test2d_2=malloc(2*sizeof(int*));
    arr_test2d_2[0]=malloc(3*sizeof(int));
    arr_test2d_2[1]=malloc(1*sizeof(int));
    arr_test2d_2[2]=malloc(1*sizeof(int));
    arr_test2d_2[0][0]=1;
    arr_test2d_2[0][1]=2;
    arr_test2d_2[0][2]=5;
    arr_test2d_2[1][0]=3;
    arr_test2d_2[2][0]=4;

    // free(arr_test2d_2);
    // free(&arr_test2d_2[1][0]);
    // free(&arr_test2d_2[2][0]);
    // arr_test2d_2[1][0]=5;
    // printf("arr_test2d_2[0][0] %d\n",arr_test2d_2[0][0]);
    // printf("arr_test2d_2[0][1] %d\n",arr_test2d_2[0][1]);
    // printf("arr_test2d_2[0][2] %d\n",arr_test2d_2[0][2]);
    // printf("arr_test2d_2[1][0] %d\n",arr_test2d_2[1][0]);
    // printf("arr_test2d_2[2][0] %d\n",arr_test2d_2[2][0]);

    int *test_realloc = realloc(arr_test2d_2[0],sizeof(int)*0); 
    free(test_realloc);
    free(test_realloc);
    free(test_realloc);

    // printf("test_realloc[0] %d\n",test_realloc[0]);
    // printf("test_realloc[1] %d\n",test_realloc[1]);
    // printf("test_realloc[2] %d\n",test_realloc[2]);

    // int a=7*16*16*16*16*16+
    // 7*16*16*16*16+
    // 0*16*16*16+
    // 13*16*16+
    // 15*16+
    // 8*1;


    //var var_pos sizeof(var) sizeof(var_pos) sizeof(*var) 


    // int a,b=5;
    // double c=3.14;

    // printf("a=%4d,sizeof(a)=%d,address is %d\n",a,sizeof(a),&a);
    // printf("b=%4d,sizeof(b)=%d,address is %d\n",b,sizeof(b),&b);
    // printf("c=%4.2f,sizeof(c)=%d,address is %d\n",c,sizeof(c),&c);
    // int num =20;
    // int *ptr = &num;
    
    // printf("&num: %p\n",&num);
    // printf("ptr: %p\n", ptr);
    // printf("&ptr: %p\n", &ptr);

    // int num =20;
    // double array[2] = {11,22};
    // float  *ptr;
    // char ***ppptr,**pptr;
    // ptr = &num;
    // pptr = &ptr;
    // ppptr = &pptr;
    // printf("*(array+0): %f\n",*(array+0));
    // printf("*(array+1): %f\n",*(array+1));
    // printf("***ppptr = %d",***ppptr);

    // prog10_7
    // int a1=100, *ptri;
    // float a2=3.2f, *ptrf;
    // ptri = &a2;
    // ptrf = &a1;

    // prog10_12
    // int a=12,b=17,*ptr;
    // ptr=max(&a,&b);
    // printf("max=%d\n",*ptr);

    // prog10_16
    // int a[3]={5,7,9};
    // int i,sum=0;
    // int *ptr=a;
    // for(int i=0;i<3;i++)
    // {
    //     sum+=*(a+i);
    // }
    // printf("sum=%d\n",sum);

    // ==============
    // int *a;
    // scanf("%d",&(*a));
    // printf("%d\n",*a);

    


    system("pause");
    return 0;
}

int *max(int *p1, int *p2)
{
    if(*p1>*p2)
        return p1;
    else
        return p2;
}