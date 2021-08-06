#include<stdio.h>

int main()
{
    int i,j;
    int rows = 5;
    int gap = rows;
   
    for(i=1;i<=rows;i++)
    {
        int val = i;
        for(j=0;j<gap;j++)
        {
            printf("  ");
        }
        
        for(;j<=rows;j++)
            printf("%d ",val++);

        val--;

        for(j=1;j<i;j++)
            printf("%d ",--val);
        
        gap--;
        printf("\n");
    }
}

