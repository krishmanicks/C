#include<stdio.h>

void trap(int a[], int n)
{
    int i;
    int sum =0;
    int maxleft=a[0];
    int maxright = a[n-1];

    int l = 1;
    int r = n-1;

    while(l<=r)
    {  
         if(maxleft < maxright)
        {
            if(a[l] > maxleft)
                {
                    maxleft = a[l];
                     
                }     
            else 
                {
                    sum = sum + (maxleft - a[l]);
                }
                l++;
        }
        else 
        {
            if(maxright < a[r])
                {
                   maxright = a[r];
                }  
            else
                {
                    sum = sum + (maxright - a[r]);
                }     
                r--;
        }       
}
    printf("%d\n",sum); 
}

int main()
{
    int a[] = {3,0,0,2,0,4};
    int n = 6;
    trap(a,n);
}