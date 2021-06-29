#include<stdio.h>
#include <stdlib.h>


int stocks(int a[], int n)
{
    int i;
    int j;
   int max = 0;
  
   for(i=0,j=1; i<=n-2; i++,j++)
    {
        if(a[j] > a[i])
        {
            max = max + (a[j] - a[i]);
        }
    }
    printf("%d", max);

}

int main()
{
    int arr[] = {7,1,5,3,6,4};  
    int n=5;   
    stocks(arr,n);
}