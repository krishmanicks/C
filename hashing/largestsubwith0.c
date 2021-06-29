#include<stdio.h>

int maxLen(int a[], int n)
{
      
    int count = 0;
    int original = 0;
    int i,j,k=0;
    int b[n];
    int max = 0;
     
    
    for(i=0;i<n-1;i++)
    {    
        int sum = a[i];
        count = 0;
        original = 0;
        for(j=i;j<n;j++)
        {   
            count++;
            sum = sum + a[j+1];
            if(sum == 0)
            {
                original = count+1;
            }
        }
         b[k++] = original;
    }
    
    for(i=0;i<k;i++)
    {
        if(b[i] > max)
        {
            max = b[i];
        }
    }
    
    printf("\n%d ", max);
}

int main()
{
    int a[] = {15,-2,2,-8,1,7,10,23};
    int n=8;
    maxLen(a,n);
}


