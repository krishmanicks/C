/*       *****
        *****
       *****
      *****
     *****
            */

#include<stdio.h>

void pattern(int n)
{
    int space = n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            printf("* ");
        }
        space--;
        printf("\n");
    }
}
        
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
}