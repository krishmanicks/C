#include<stdio.h>

int maximum(int a[], int b[], int n, int m)
{
    int max1=0,max2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1 = a[i];
        }
    }

    for(int i=0;i<m;i++)
    {
        if(b[i]>max2)
        {
            max2 = b[i];
        }
    }

    if(max1>max2)
    {
        return max1;
    }
    else
    {
        return max2;
    }
}

int common(int a[], int b[], int n, int m)
{
    int max = 0;
    max = maximum(a,b,n,m);
    int hash[max+1];
    int next[max+1];

    for(int i=0;i<max+1;i++)
    {
        hash[i] = 0;
    }

    for(int i=0;i<max+1;i++)
    {
        next[i] = 0;
    }

    for(int i=0;i<m;i++)
    {
        hash[b[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(hash[a[i]] >=1 )
        {
            next[a[i]]++;
        }
    }

    for(int i=0;i<max+1;i++)
    {
        for(;next[i]!=0;next[i]--)
        {
            printf("%d ",i);
        }
    }


}

int main()

{
    int a[] = {6, 1, 8, 34, 5};
    int n=5;
    int m = 3;
    int b[] = {1, 4, 5};

    common(a,b,n,m);
}