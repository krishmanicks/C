// Online C compiler to run C program online
#include <stdio.h>

void freq(int arr[], int n, int P)
{
        int hash[n+1];
        int i=0;
        
        for(i=0;i<n+1;i++)
        {
            hash[i] = 0;
        }
        for(i=0;i<P+1;i++)
        {
            hash[i] = 0;
        }
        
        for(i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        
        for(i=0;i<n;i++)
        {
            printf("%d ",hash[i+1]);
        }
}

int main() 
{
    int N = 5;
    int arr[] = {2, 3, 2, 3, 5};
    int P = 3;

    freq(arr,N,P);
    
    return 0;
}