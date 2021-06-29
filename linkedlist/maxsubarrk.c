#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first=NULL;
//struct Node *head=NULL;
struct Node *last=NULL;
int count=0,max;
void calculate()
{
    struct Node *trav=first;
    while(trav!=NULL)
    {
        if((trav->data)>max)
        {
            max=trav->data;
        }
        trav=trav->next;
    }

    printf("%d ",max);
}
void push(int key,int k)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;

    if(first==NULL)
    {
        first=last=node;
        count++;
    }
    else
    {
        last->next=node;
        last=node;
        count++;            
    }

    if(count==k)
    {
        calculate();
        count--;
        first=first->next;
    }
}

void subArray(int a[],int n,int k)
{
     int i;
     for(i=0;i<n;i++)
     {
         push(a[i],k);
     }
}

void main()
{
    int a[] = {8,5,10,7,9,4,15,12,90,13};
    int n=10;
    int k=4;
    subArray(a,n,k);
}



// #include<stdio.h>
// #include<stdlib.h>

// void subarrar(int a[], int n, int k)
// {
//    int i;
//    int start=0,end=0;
//    int max=0;
//    for(i=0;i<(n-k+1);i++)
//    {

//        start = i;
//         end = (i+k-1)<(n-1)?(i+k-1):(n-1);
//         max=0;
//         while(start<=end)
//         {

//             if(a[start]>max)
//             {
//                 max=a[start];
//             }
//               start++;
//         }
//         printf("%d ",max);
//    }
// }

// int main()  
// {            
//     int a[] = { 1, 2, 3, 1, 4, 5, 2, 3, 6};
//     int n=9;
//     int k=3;
//     subarrar(a,n,k);
// }