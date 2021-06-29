// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
   
    int n = 10;
    int j;
    int real = 0;
    int count;
  
  for(int i=1;i<=n;i++)
  {     
      count = 0;
      j=i;
      while(j)
      {  
          if(i%j == i || i%j == 0 )
          {
              count++;
          }
          j--;
      }
      if(count == 3)
      {
          real++;
      }
  }
  printf("%d ",real);
}