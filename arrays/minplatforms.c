#include<stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int bubble(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                 swap(a[j], a[j+1]);
            }         

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int minimum(int a[], int d[], int n)
{
    int needed=1;
    int max=1;
    int i=1,j=0;

    while(i<n && j<n)
    {
        if(a[i]>=d[j])
        {
            j++;
            max--;
        }
        else if(a[i]<d[j])
        {
            i++;
            max++;
        }
        if(needed<max)
        {
            needed++;
        }
    }
    printf("\n%d",needed);

}   

int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;
    int c = bubble(arr,n);
    printf("\n");
    int d = bubble(dep,n);
    minimum(arr,dep,n);
}