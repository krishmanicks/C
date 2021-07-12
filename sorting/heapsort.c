#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i +1;
    int r = 2*i +2;

    if(l<n && arr[l] > arr[largest])
        largest = l;

    if(r<n && arr[r] > arr[largest])
        largest = r;

    if(largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr,n,largest);
    }
}

int heapsort(int arr[], int n)
{
    for(int i=(n/2 -1);i>=0;i--)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[] ={9,5,2,8,100,-3,6,1,3,7};
    int n = 8;

    heapsort(arr,n);    
    printarray(arr,n);

}