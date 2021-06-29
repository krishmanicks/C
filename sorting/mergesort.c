// Online C compiler to run C program online
#include <stdio.h>

void display(int a[], int n)
{
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


int merge(int a[],int l, int mid, int h)
{
    int i = l;
    int j = mid+1;
    int k = l;
    int b[100];
    while(i<= mid && j<=h)
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }   
    // if(i > mid)
    // {
    //     while(j<=h)
    //     {
    //         b[k] = a[j];
    //     }
    //      j++;
    //     k++;
    // }
    // else if(j>h)
    // {
    //     while(i<=mid)
    //     {
    //         b[k] = a[i];
    //     }
    //     k++;
    //     i++;
    // }

    for(;i<=mid;i++)
    {
        b[k] = a[i];
        k++;
    }
    for(;j<=h;j++)
    {
        b[k] = a[j];
        k++;
    }
    
    for(k=l;k<=h;k++)
    {
        a[k] = b[k];
    }

    
}

int mergesort(int a[], int l, int h,int n)
{
    if(l<h)
    {   
        int mid;
        mid = (l+h)/2;
        mergesort(a,l,mid,n);
        mergesort(a,mid+1,h,n);
        merge(a,l,mid,h);
    } 
}

void main() 
{
  int a[] = {15,5,4,8,1,3,16,10,20};
  int n=9;
  int lb = 0;
  int ub = n-1;
  mergesort(a,lb,ub,n);
  display(a,n);   
}