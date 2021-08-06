#include<stdio.h>

/*
    * * * * * *
    *       *
    *     *
    *   *
    * *
    *       */

int main()
{
    int n = 10;  
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {   
            if(i==n || j==1|| j==i)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
    }
}


