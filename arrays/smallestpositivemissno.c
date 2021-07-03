
#include <stdio.h>

int missingNumber(int arr[], int n) 
    { 
        int max = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > max)
                max = arr[i] ;
        }
        int hash[max+1];
        
        for(int i=0;i<max+1;i++)
        {
            hash[i] = 0;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] > 0)
            {   
                hash[arr[i]]++;
            }
        }
  
        for(int i=1;i<max+1;i++)
        {   
            if(hash[i] == 0)
            {   
                return i;
            }
        }
        return max+1;
    } 

int main() {
    
    int n = 8;
    int arr[] = {28, 7, -36, 21, -21, -50, 9, -32};

    printf("%d",missingNumber(arr,n));
    
    return 0;
}