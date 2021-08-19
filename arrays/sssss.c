#include <stdio.h>

void count(int a[], int curr, int n, int next)
{
    int count=0;   
  int i,j;
  int ct = 0;

    for(i=0;i<n;i++)   
    {
        if(ct == n)
        {
            break;
        }

        if(a[i] != 0)            
        {  
             ct = 0;

            for(j=0;j<n;j++)
            {                                   
                if(i == j && a[j] != 0)
                {
                    a[j] = a[j] - curr;
                }
                else if(a[j] != 0)
                {
                    a[j] = a[j]-next;
                }

                if(a[j] <= 0)
                {   
                    a[j] = 0;
                }
            }
            count++;
        }
            ct++;
        if(i == n-1)
        {   
            i=0;
        }
    }
    
    if(count == 0)
        count--;

    printf("%d",count+1);
}

int main() 
{
  int i,j;
  int n=5;
  int a[]={7,2,6,4,5};
  int curr=4,next=5;

  count(a,curr,n,next);
  
}