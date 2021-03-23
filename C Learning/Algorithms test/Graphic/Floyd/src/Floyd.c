#include<stdlib.h>
#include<stdio.h>
#include <windows.h>

#define SIZE 7
#define NUMBER 6
#define INFINITE 99999

int Graph_Matrix[SIZE][SIZE];
int distance[SIZE][SIZE];

void BuildGraph_Matrix(int *Path_Cost)
{
    int Start_Point;
    int End_Point;
    int i,j;
    for(i=1;i<SIZE;i++)
    {
        for(j=1;j<SIZE;j++)
        {
            if(i==j)
            {
                Graph_Matrix[i][j]=0;
            }
            else
                Graph_Matrix[i][j]=INFINITE;
        }
    }
    i=0;
    while(i<SIZE)
    {
        Start_Point = Path_Cost[i*3];
        End_Point=Path_Cost[i*3+1];
        Graph_Matrix[Start_Point][End_Point]=Path_Cost[i*3+2];
        i++;
    }

}


void shortestPath(int vertex_total)
{
    int i,j,k;
    for(i=1;i<=vertex_total;i++)
    for(j=i;j<=vertex_total;j++)
    {
        distance[i][j]=Graph_Matrix[i][j];
        distance[j][i]=Graph_Matrix[i][j];
    }

    for(k=1;k<=vertex_total;k++)
    {
        for(i=1;i<=vertex_total;i++)
        {
            for(j=1;j<=vertex_total;j++)
            {
                if(distance[i][k]+distance[k][j]<distance[i][j])
                    distance[i][j]=distance[i][k]+distance[k][j];
            }
        }
    }
}

int main()
{
    int Path_Cost[7][3]={
        {1,2,20},
        {2,3,30},
        {2,4,25},
        {3,5,28},
        {4,5,32},
        {4,6,95},
        {5,6,67}
    };

    int i,j;
    BuildGraph_Matrix(&Path_Cost[0][0]);
    printf("------------\n");
    printf("The minium distance between each two points:\n");
    printf("------------\n");
    shortestPath(NUMBER);
    printf(" vertex 1  vertex 2  vertex 3  vertex 4  vertex 5  vertex 6\n");
    for(i=1;i<=NUMBER;i++)
    {
        printf("vertex %d",i);
        for(j=1;j<=NUMBER;j++)
            printf("%5d ",distance[i][j] );
        printf("\n");
    }
    printf("==========\n");
    printf("\n");
    system("pause");
    return 0;
}
