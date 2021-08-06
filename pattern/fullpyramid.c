#include<stdio.h>

/*
        *  
       * * 
      * * * 
     * * * *
    * * * * *       */

int main()
{
    int n = 10;
    int m = 1;
    int spaces = n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<spaces;j++)
        {
            printf(" ");
        }
        spaces--;
        for(int k=1;k<=m;k++)
        {
            printf("* ");
        }
        printf("\n");
        m++;
    }
    
}