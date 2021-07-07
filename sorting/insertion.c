#include<stdio.h>

void insertionSort(int arr[], int n)
{   
    int temp = 0;
    int j=0;

    for(int i=0; i<n; i++)
    {
        temp = arr[i];
        j = i-1;
        
        while (j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;        
    }
}

int main()
{
    int arr[] = {5,4,10,1,6,2,8,99,34,65,23,0,79};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}