#include <stdio.h>

void main() 
{
    int a[] = {8,3,4,5,6};
    int n =5;
    int i=0,j;
    int count=0;
   while(i!=n-1)
    {
        for(j=1;j<n;j++)
        
        {
            if((a[i] > a[j]) & (i<j))
            {
                count+=1;
            }
        }
            i++;
}
  printf("%d",count);
}