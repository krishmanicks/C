/* 
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4 
    4 3 2 2 2 3 4 
    4 3 2 1 2 3 4 
    4 3 2 2 2 3 4 
    4 3 3 3 3 3 4 
    4 4 4 4 4 4 4 
                    */

#include<stdio.h>
#include<math.h>

int findmax(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{   
    int n;
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            printf("%d", findmax(abs(i-n), abs(j-n)) +1);
        }
        printf("\n");
    }
}