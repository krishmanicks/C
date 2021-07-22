#include <stdio.h>


void printpat(int n)
{
  for(int i=n;i>0;i--)
    {  
       for(int j=n;j>0;j--)
       {    
            int k = i;
           while(k)
           {
           printf("%d ",j);
           k--;
           }
       }
       printf("\n");
    }
}

int main() {
    int n = 5;
    printpat(n);
    
    return 0;
}