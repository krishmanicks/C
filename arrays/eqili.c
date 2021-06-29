#include<stdio.h>

int equilibrium(int arr[], int n )
{   
     int sum=0, l=0,i;

    if(n==1)
    { 
        printf("%d",arr[0]);
    }
   
    else{
           for(i=0;i<n;i++)
   {
       sum = sum + arr[i];
   }
    
    for(i=0;i<n;i++)
    {
        sum =  sum-arr[i];
        if(l==sum) {
            printf("the equilibrium is at index %d", i);
            break;
        }
        l = l + arr[i];
    }
    }
}

int main()
{
    int arr[] = {1,6,7,0,7};
    int n=5;
    equilibrium(arr,n);
    return 0;
    

}