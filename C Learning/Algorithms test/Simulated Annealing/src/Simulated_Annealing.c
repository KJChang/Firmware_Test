#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

#define T0 50000.0    //初始溫度
#define T_end (1e-8)
#define q 0.98   //退火係數
#define L 1000    //每個溫度時的迭代次數，即鏈長
#define N 31     //城市數量
int city_list[N];  //用於存放一個解
double city_pos[N][2] = {{1304,2312},{3639,1315},{4177,2244},{3712,1399},{3488,1535},{3326,1556},{3238,1229},{4196,1004},{4312,790}, 
{4386,570},{3007,1970},{2562,1756},{2788,1491},{2381,1676},{1332,695},{3715,1678},{3918,2179},{4061,2370},{3780,2212},{3676,2578},{4029,2838},
{4263,2931},{3429,1908},{3507,2367},{3394,2643},{3439,3201},{2935,3240},{3140,3550},{2545,2357},{2778,2826},{2370,2975}}; 
 // 中國31個城市座標

//函式宣告
double distance(double *,double*);   //計算兩個城市的距離
double path_len(int *);       //計算路徑長度
void  init();  //初始化函式
void create_new(); // 產生新解

//距離函式
double distance(double *city1,double *city2)
{

     double x1=*city1;
     double y1=*(city1+1);
     double x2=*city2;
     double y2=*(city2+1);
     double dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
     return dis;

}

//計算路徑長度
double path_len(int *arr)
{
  
    double path=0;  //初始化路徑長度
    int index=*arr;  //定位到第一個數字（城市序號）
    for(int i=0;i<N-1;i++)
    {
        int index1=*(arr+i);
        int index2=*(arr+i+1);
        // cout<<index1<<" "<<index2<<endl;
        // printf("index1: %d\n",index1);
        // printf("index2: %d\n",index2);
        double dis=distance(city_pos[index1-1],city_pos[index2-1]);
        path+=path+dis;
    }
    int last_index=*(arr+N-1);   //最後一個城市序號
    int first_index=*arr;         //第一個城市序號
    double last_dis=distance(city_pos[last_index-1],city_pos[first_index-1]);
    path=path+last_dis;
    return path;  //返回路徑總長度
}

//初始化函式
void init()
{
   for(int i=0;i<N;i++)
       city_list[i]=i+1;   //初始化一個解
}

//產生一個新解， 此處採用隨機交叉兩個位置的方式產生新的解
void create_new()
{
     double r1=((double)rand())/(RAND_MAX+1.0);
     double r2=((double)rand())/(RAND_MAX+1.0);
     int pos1=(int)(N*r1);   //第一個交叉點的位置
     int pos2=(int)(N*r2);
     int temp=city_list[pos1];
     city_list[pos1]=city_list[pos2];
     city_list[pos2]=temp;      //交換兩個點
}

//主函式
int main()
{
    srand((unsigned)time(NULL));   //初始化隨機數種子
    time_t start,finish;
    start=clock();  //程式執行開始計時
    double T;
    int count=0;
    T=T0;  //初始溫度
    init(); //初始化一個解
    int city_list_copy[N]; //用於儲存原始解
    double f1,f2,df; //f1為初始解目標函式值，f2為新解目標函式值，df為二者差值
    double r;   //0-1之間的隨機數，用來決定是否接受新解
    while(T>T_end)   //當溫度低於結束溫度時，退火結束
    {
        for(int i=0;i<L;i++)
        {
            memcpy(city_list_copy,city_list,N*sizeof(int)); //複製陣列
            create_new();
            f1=path_len(city_list_copy);
            f2=path_len(city_list);
            df=f2-f1;
            //以下是metropolis準則
            if(df>=0)
            {
                r=((double)rand())/(RAND_MAX);
                if(exp(-df/T)<=r)  //保留原來的解
                {
                     memcpy(city_list,city_list_copy,N*sizeof(int));
                }
            }
        }
        T*=q;  //降溫
        count++;
    }
    finish=clock();  //退火過程結束
    double duration=((double)(finish-start))/CLOCKS_PER_SEC;  //計算時間
    printf("SA algorithm: initial temp T0=%.2f,cooling parameter q=%.2f,The iteration of each temperature %d ,total cooling times %d, The optimized TSP route is:\n",T0,q,L,count);
    for(int i=0;i<N-1;i++)  //輸出最優路徑
    {
        printf("%d--->",city_list[i]);
    }
    printf("%d\n",city_list[N-1]);
    double len = path_len(city_list); // 最優路徑長度
    printf("The optimized length:%lf\n",len);
    printf("spend time:%lf s.\n",duration);
    system("pause");
    return 0;
}