#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    int i;
    int k =3;
    //int m=2; i=i+k+m
    int start=0,end=0;
    int temp;
    for(i=0;i<n;i=i+k)
    {
        start = i;
        end = (i+k-1)<(n-1) ? (i+k-1): (n-1);

        while(start<end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
}