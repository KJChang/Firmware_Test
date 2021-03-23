#include<stdlib.h>
#include<stdio.h>
// #include <windows.h>

#define SIZE 7
#define NUMBER 6
#define INFINITE 99999

int Graph_Matrix[SIZE][SIZE];
int distance[SIZE];

void BuildGraph_Matrix(int *Path_Cost);
void shortestPath(int vertex1,int vertex_total);

int main()
{
    int Path_Cost[8][3]= {
        {1,2,29},
        {2,3,30},
        {2,4,35},
        {3,5,28},
        {3,6,87},
        {4,5,42},
        {4,6,75},
        {5,6,97}
    };

    BuildGraph_Matrix(&Path_Cost[0][0]);
    shortestPath(1,NUMBER);
    printf("--------------------------------------------\n");
    printf("The minimum result for vertex 1 to different vertex\n");
    printf("--------------------------------------------\n");
    for(int j=1;j<SIZE;j++)
    {
        printf("the distance from vertex 1 to %2d =%3d\n",j,distance[j]);
    }
    printf("--------------------------------------------\n");
    printf("\n");
    system("pause");
    return 0;
}

void BuildGraph_Matrix(int *Path_Cost)
{
    int Start_Point;
    int End_Point;
    for(int i=1;i<SIZE;i++)
    {
        for(int j=1;j<SIZE;j++)
        {
            if(i==j)
                Graph_Matrix[i][j] = 0;
            else
                Graph_Matrix[i][j]=INFINITE;
        }
    }
    int i=0;
    while(i<SIZE)
    {
        Start_Point = Path_Cost[i*3];
        End_Point = Path_Cost[i*3+1];
        Graph_Matrix[Start_Point][End_Point]=Path_Cost[i*3+2];
        i++;
    }
}

void shortestPath(int vertex1, int vertex_total)
{
    int shortest_vertex =1;
    int shortest_distance;
    int goal[SIZE];
    for(int i=1;i<= vertex_total;i++)
    {
        goal[i]=0;
        distance[i]=Graph_Matrix[vertex1][i];
    }
    goal[vertex1]=1;
    distance[vertex1]=0;
    printf("\n");

    for(int i=1;i<=vertex_total-1;i++)
    {
        shortest_distance=INFINITE;

        for(int j=1;j<=vertex_total;j++)
        {
            if(goal[j]==0 && shortest_distance>distance[j])
            {
                shortest_distance=distance[j];
                shortest_vertex=j;
            }
        }
        goal[shortest_vertex]=1;

        for(int j=1;j<=vertex_total;j++)
        {
            if(goal[j]==0 && 
            distance[shortest_vertex]+Graph_Matrix[shortest_vertex][j]<distance[j])
            {
                distance[j]=distance[shortest_vertex]+Graph_Matrix[shortest_vertex][j];
            }
        }
    }
}
