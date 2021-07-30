#include<stdio.h>

int gcd(int a, int b)
{
    if(a%b == 0)
        return b;
    else   
        return gcd(b, a%b);
}

void gcdn(int a[], int n)
{
    int g=0;
    g = gcd(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        g = gcd(g,a[i]);    
    }
    printf("%d ",g);
}

int main()
{
    int a[] = { 75,30,60,9,27};;
    int n = 5;
    int g = 0;
    gcdn(a,n);
}