#include<stdio.h>

void trapwater(int arr[], int n)
{
    int sum = 0;
    int index = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(i<j)
                {
                    int smallest = arr[i] < arr[j] ? arr[i] : arr[j];
                    index = j-i;
                    if(sum < (smallest * index))
                        sum = smallest * index;    
                }
                else
                {
                    int smallest = arr[i] < arr[j] ? arr[i] : arr[j];
                    index = i-j;
                    if(sum < (smallest * index))
                        sum = smallest * index;
                }
            }
        }
    }
    printf("%d ",sum);
}

int main()
{
    int arr[] = {4,3,2,1,4};
    int n = 5;
    trapwater(arr,n);

}