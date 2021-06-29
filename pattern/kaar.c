
#include <stdio.h>

int main() {
   int j;
   for(int i=1;i<4;i++)
   {
       for( j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       for(int k=i-1;k>0;k--)
        {
            printf("%d ",k);
        }
       printf("\n");
   }
   for(int i=2;i>0;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       for(int k=i-1;k>0;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
   }
   printf("\nfuck");
    
    return 0;
}