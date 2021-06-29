#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int zigzag(int a[], int n)
{
    int j=1;
    int i;
    for(i=1; i<n; i+=2)
    {
        if(a[i-1] >  a[i])
        {
            swap(&a[i-1] , &a[i]);
        }
        if(a[i] < a[i+1])
        {
            swap(&a[i] , &a[i+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}


int main()
{
    int n = 7;
   // int a[] = {4, 3, 7, 8, 6, 2, 1};
    int a[] = {3, 4, 6, 2,1,8,9};
    zigzag(a,n);
}