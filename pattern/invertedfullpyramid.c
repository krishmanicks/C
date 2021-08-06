#include<stdio.h>

/*
     * * * * * 
      * * * *
       * * * 
        * *
         *      */

int main()
{
    int n = 6;
    int m = n;
    int spaces = 1;

    for(int i=1;i<=n;i++)
    {   
        for(int k=1;k<=m;k++)
        {
            printf("* ");
        }
        printf("\n");

        for(int j=0;j<spaces;j++)
        {
            printf(" ");
        }
        spaces++; 
        m--;
    }
    
}