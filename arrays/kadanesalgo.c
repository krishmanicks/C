#include<stdio.h>
#include<limits.h>

void contigiousarray(int arr[], int n)
{   
    int sum = INT_MIN;
    int max = 0;

    for(int i=0;i<n;i++)
    {
        max = max + arr[i];

        if(max < arr[i])
            max = arr[i];
        if(sum < max)
            sum = max;
    }
    printf("%d",max);
}

int main()
{
    int arr[] = {1,2,3,-2,5};
    int n = 5;
    contigiousarray(arr,n);
}