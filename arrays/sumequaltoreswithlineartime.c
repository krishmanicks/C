
#include <stdio.h>

void sumoftwo(int arr[], int k, int n)
{
    int hash[1000] ={0};
    int count =0;
    for(int i=0;i<n;i++)
    {   
        hash[arr[i]]++;
        
        int complement = k - arr[i];
        if(hash[complement] == 1)
        {
            printf("value :%d %d\n",complement,arr[i]);
            count = 1;
        }
    }
    if(count == 0)
        printf("nothing");
}

int main() {
   
   int arr[] = {4,8,3,6,2,9,5};
   int k = 13;
   int n = 7;
   
   sumoftwo(arr,k,n);
   
    return 0;
}