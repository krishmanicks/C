#include<stdio.h>
    
/*
    1 2 3 4 5 
    2     5 
    3   5 
    4 5 
    5   */


int main()
{
    int n = 10;  
    int m = 1;
    int j = m;
    for(int i=n;i>=1;i--)
    {
        for(j=m;j<=n;j++)
        {   
           if(i == n || j == m || j==n)
                printf("%d ",j);
            else    
                printf("  ");
        }
        m++;
        printf("\n");
    }
}


