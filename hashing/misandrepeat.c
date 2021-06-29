#include<stdio.h>

int missing(int a[], int n)
{   
    int b[n+1];
    int i;
    //int max=3;
    
    for(i=0;i<n+1;i++)
    {
        b[i] = 0;        
    }
    
    for(i=0;i<n;i++)
    {
        b[a[i]]++;        
    }
    
    for(i=1;i<n+1;i++)
    {
        if(b[i]>=2)
        {
            printf("%d ",i);
        }
        if(b[i] == 0)
        {
            printf("%d ",i);
        }
    }
    
}

int main()
{
    int a[] = {2,1,3,6,7,5,8,2};
    int n = 8;
    missing(a,n);
}
