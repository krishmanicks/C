#include <stdio.h>

int k=0;

int Max(int a[],int n)
{
    int max=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    return max;
}



void Count(int a[],int n)
{
    int i;
    int max = Max(a,n);
    printf("%d\n",max);
    
    int b[max+1];

    for(i=0;i<max+1;i++)
    {
        b[i]=0;
    }

    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }

    for(i=0;i<max+1;i++)
    {
        for(;b[i]!=0;b[i]--)
        {
            a[k++]=i;
        }
    }


}


void main()
{
    int a[]={11,13,7,12,16,9,24,5,10,0};
    int n = sizeof(a)/sizeof(a[0]);

    Count(a,n);

    for(int i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}