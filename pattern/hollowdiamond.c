#include<stdio.h>

int main()
{
    int n = 5;
    int m = 1;
    int spaces = n-1;

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
     m = n;
     spaces = 1;

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