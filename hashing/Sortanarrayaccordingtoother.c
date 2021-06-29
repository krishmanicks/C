// Online C compiler to run C program online
#include <stdio.h>

int sort(int a[], int b[], int n, int m, int max)
{
    int i;
    int c[max+1];

    for(i=0;i<=max;i++)
    {
        c[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }

 for(i=0;i<m;i++)
 {  
    if(b[i] <= max)
        {
            if(c[b[i]] >= 1)
                {   
                    while(c[b[i]])
                    {
                        printf("%d ",b[i]);
                        c[b[i]]--;
                    }
                }
        }
 }
  for(i=0;i<max+1;i++)
  {
    if(c[i] >=1 )
      {     
          while(c[i])
            { 
                printf("%d ",i);
                c[i]--;
            }
         
      }
  }
}

int main() 
{
    int n = 11;
    int m = 4;
    int a[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int b[] = {2, 1, 8, 3};
    int max = 0;
 
    for(int i=0;i<n;i++)
        {
            if(a[i] > max)
                {
                    max = a[i];
                }
        }

    sort(a,b,n,m, max);
    return 0;
 
}