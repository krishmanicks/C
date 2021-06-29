#include<stdio.h>

int b[10];
 int top=-1;
 int n=4;

void push(int a)
{      
    int max = a; 
    
    if(top == -1)
    {
         b[++top] = a;
    }
}


void large(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {   
        if(i==0)
        {
            push(a[i]);
        }
        else if(a[i-1] > a[i])
        {
            push(a[i]);
        }
        
    }
}

int main()
{
    int a[] = {1,3,2,4};   
    int n = 4;
    large(a,n);

     for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}