#include<stdio.h>

int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int bubble(int a[], int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                 swap(a[j], a[j+1]);
            }         

        }
    }
}

int choco(int arr[], int n, int m)
{
    int i = 0;
   int j=arr[n-1];
   int diff;
   for(i=0; i+m-1<n; i++)
   {
       diff = arr[i+m-1] - arr[i];
       if(diff < j)
       {
           j = diff; 
       }
   }
   printf("\n%d ",j);
     
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};  
    int n=7;
    int m=3;
    bubble(arr,n);
    for (int k=0;k<n;k++)
    {
        printf(" %d ", arr[k]);
    }
     choco(arr,n,m);
}