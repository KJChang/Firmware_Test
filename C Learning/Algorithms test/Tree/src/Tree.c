#include<stdlib.h>
#include<stdio.h>
#include <windows.h>
typedef struct tree
{
    int data;
    struct tree *left, *right;
} node;
typedef node *btree;

btree creat_tree(btree,int);

void inorder(btree ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("[%2d] ",ptr->data);
        inorder(ptr->right);
    }
}

void preorder(btree ptr)
{
    if(ptr!=NULL)
    {
        printf("[%2d] ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(btree ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("[%2d] ",ptr->data);
    }
}
void Btree_create(int* btree,int *data,int lenght)
{
    int level;
    for(int i=0;i<lenght;i++)
    {
        for(level=1;btree[level]!=0;)
        {
            int tmp = data[i];
            int tmp1 = btree[level];
            if(data[i]>btree[level])
                level=level*2+1;
            else
            {
                level=level*2;
            }
        }
        btree[level]=data[i];
    }
}

btree search(btree ptr,int val)
{
    while(1)
    {
        if(ptr==NULL)
            return NULL;
        if(ptr->data==val)
            return ptr;
        else if(ptr->data>val)
            ptr=ptr->left;
        else
            ptr=ptr->right;
        
    }
}

void heap(int *data,int size)
{
    for(int i=size/2;i>0;i--)
        ad_heap(data,i,size-1);
    printf("heaping result\n");
    for(int i=1;i<size;i++){printf("[%2d] ",data[i]);}
    printf("\n");
    for(int i=size-2;i>0;i--)
    {
        int tmp=data[i+1];
        data[i+1]=data[1];
        data[1]=tmp;
        ad_heap(data,1,i);
        printf("\n Processing ...");
        for(int i=1;i<size;i++){printf("[%2d] ",data[i]);}
    }

}

void ad_heap(int *data,int i, int size)
{
    int j=2*i;
    int tmp=data[i];
    int post=0;
    while(j<=size && post==0)
    {
        if(j<size)
        {
            if(data[j]<data[j+1])
                j++;
        }
        if(tmp>=data[j])
            post=1;
        else
        {
            data[j/2]=data[j];
            j=j*2;
        }
        
    }
    data[j/2]=tmp;
}
int main(void)
{

    // binary tree by array ===========
    // int length=9;
    // int data[]={0,6,3,5,4,7,8,9,2};
    // int btree[16]={0};
    // printf("Original array~\n");
    // for(int i=0;i<length;i++)
    //     printf("[%2d] ",data[i]);
    // printf("\n");
    // Btree_create(btree,data,9);
    // printf("Btree content:\n");
    // for(int i=1;i<16;i++)
    // {
    //     printf("[%2d] ",btree[i]);
    // }
    // printf("\n");

    // binary tree by link list ==========
    // int data[]={5,6,24,8,12,3,17,1,9};
    // btree ptr=NULL;
    // btree root=NULL;
    // for(int i=0;i<9;i++)
    // {
    //     ptr=creat_tree(ptr,data[i]);
    // }
    // printf("left leave\n");
    // root=ptr->left;
    // while(root!=NULL)
    // {
    //     printf("%d\n",root->data);
    //     root=root->left;
    // }

    // printf("right leave\n");
    // root=ptr->right;
    // while(root!=NULL)
    // {
    //     printf("%d\n",root->data);
    //     root=root->right;
    // }

    int size,data[9]={0,5,6,4,8,3,2,7,1};
    size=9;
    printf("Original array: ");
    for(int i=1;i<size;i++)
    {
        printf("[%2d] ",data[i]);
    }
    heap(data,size);
    printf("\n Sorting result\n");
    for(int i=1;i<size;i++)
    {
        printf("[%2d] ",data[i]);
    }
    printf("\n");

    LARGE_INTEGER t1, t2, ts;
    QueryPerformanceFrequency(&ts);
    QueryPerformanceCounter(&t1);
    // ------------------------------
    
    //-------------------------------
    QueryPerformanceCounter(&t2);
    
    printf("Lasting Time: %lf\n",(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart));
    system("pause");
    return 0;
}

btree creat_tree(btree root,int val)
{
    btree newnode, current, backup;
    newnode = (btree)malloc(sizeof(node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    if(search(root,val)!=NULL)
    {
        root=newnode;
        return root;
    }
    else
    {
        for(current=root;current!=NULL;)
        {
            backup=current;
            if(current->data>val)
            {
                current=current->left;
            }
            else
            {
                current=current->right;
            }
        }
        if(backup->data>val)
        {
            backup->left=newnode;
        }
        else
        {
            backup->right=newnode;
        }
        return root;
    }
    
}