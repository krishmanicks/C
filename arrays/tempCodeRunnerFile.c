#include<stdio.h>

int equilibrium(int arr[], int n )
{
    if(n==1)
    { 
        printf("%d",arr[0]);
    }
    int sum=0, l=0,i;
    
   for(i=0;i<n;i++)
   {
       sum = sum + arr[i];
   }
    
    for(i=0;i<n;i++)
    {
        sum =  sum-arr[i];
        if(l==sum) {
            printf("%d", i);
        }
        l = l + arr[i];
    }
}

int main()
{
    int arr[] = {1,3,4,6,2,4};
    int n=6;
    equilibrium(arr,n);
    return 0;

}