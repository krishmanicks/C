// Online C compiler to run C program online
#include <stdio.h>

void prime(int j, int n)
{   int i,count=0;
     for(i=2;i<=j;i++)
  {
      if(n%i == 0)
      {
          count++;
      }
   }
  if(count<1)
  {
      printf("it is  a prime");
  }
  else
  {
      printf(" not a prime number");
  }
}
int main() {
   int j;
   int n=8;
   if(n==1||n==2 )
   {
       printf("prime");
   }
   else if(n%2==0)
   {
        j=n; 
         prime(j,n);
   }
   else
   {
       j=(n-1)/2;
        prime(j,n);
   }
 
    
    return 0;
}