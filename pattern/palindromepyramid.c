#include<stdio.h>

/*
         1 
        1 2 1 
      1 2 3 2 1 
    1 2 3 4 3 2 1 
  1 2 3 4 5 4 3 2 1 
                        */

int main()
{
    int n=5;
    int space = n;
    int i,j;

    for(i=0;i<n;i++)
    {
        for(int k=0;k<space;k++)
        {
            printf("  ");
        }
        space--;

        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }   

        for(;j>=1;j--)
        {
            printf("%d ",j);
        }

        printf("\n");
    }   
}