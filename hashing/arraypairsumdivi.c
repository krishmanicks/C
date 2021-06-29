
#include <stdio.h>

void divisibility(int a[], int k, int n)
{   
    
    int hash[k+1];
    for(int i=0;i<k+1;i++)
    {
        hash[i] = 0;
    }
    
    for(int i=0;i<n;i++)
    {
        hash[a[i]%k]++;
    }
    
    if(hash[0]%2 == 1)
    {
        printf("false");
        return;
    }
    for(int i=1;i<k;i++)
    {
        if(hash[i] != hash[k-i])
            {   
                printf("False");
                return ;
            }
    }
    printf("True");
}

int main() {
    
    int a[] = {9,5,7,3};
    int n = sizeof(a)/sizeof(a[0]);
   
    int k=6;
    
    divisibility(a,k,n);
    return 0;
}


