#include<stdio.h>

int main()
{
    int n = 8;
    int m = 1;
    int star = 8;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<star;j++)
        {
            printf("*");
        }

        for(int k=0;k<m;k++)
        {
            printf("%d",m);
            printf("*");
        }

        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        star--;
        m++;
        printf("\n");

    }
}