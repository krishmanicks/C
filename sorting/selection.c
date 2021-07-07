#include<stdio.h>

void selectionSort(int arr[], int n)
{   
    int min = 0;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
                {
                    min = j;
                }
        }
        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int arr[] = {5,4,10,1,6,2,47,8,99,34,65,23,0,79};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}