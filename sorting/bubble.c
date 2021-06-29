#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubble(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                 swap(&a[j], &a[j+1]);
            }         

        }
    }
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[] = {15,5,4,8,1,3,16,10,20};
    int n=9;
    int c = bubble(a,n);
    display(a,n);
}