#include<stdio.h>

int main()
{
    int n = 5;
    int a[] = {3, 30, 34, 5, 9};
    int i=0,j=1;

    for(i=0;i<=n-2;i++)
    { 
        j = i+1;
       while(j<n)
        {
            if(a[i],a[j] > a[j],a[i]) 
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }                          
                    j++;
        } 
    }   
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }   
}