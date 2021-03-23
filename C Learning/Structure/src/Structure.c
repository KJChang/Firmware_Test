#include<stdlib.h>
#include<stdio.h>
struct dat
    {
        char name[10];
        int math;
        double english;
    } student;
typedef struct dat dat_new;
typedef struct 
{
    int age;
    int hot_or_not;
}teacher;


int main()
{
    
    struct dat student1;
    dat_new aa_new;
    teacher new_student;
    typedef struct dat2
    {
        int a;
        int b;
    } clock;

    struct dat aa;
    struct dat2 aaa;
    printf("sizeof(student)=%d\n",sizeof(student));
    system("pause");
    return 0;
}