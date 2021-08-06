/*
        *  
       * * 
      *   * 
     *     *
    * * * * *       */

#include<stdio.h>

int main()
{
    int n = 10;
    int spaces = n;
    int m = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=spaces;j++)
        {
            printf(" ");
        }  
        spaces--;
        for(int k=1;k<=m;k++)
        {   
            if(k==1 || k==m || i==n)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
        m++;
    }
}
