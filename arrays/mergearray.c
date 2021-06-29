#include <stdio.h>

int main() 
{
    int a[] = {15,8,5,3,6,2};
    int n =6;
    int i,j;
    int b[] ={};
    int max=a[n-1];

    for(i=n-1;i<=0;i--)
        {
            if(a[i]>=a[max])
                {   
                    b[i] = a[max];
                    a[max]--;
                }  
        }   
j = sizeof(b)/sizeof(b[0]);

for(i=0;i<j;i++)
{
    printf("%d ",b[i]);
}

}