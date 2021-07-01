#include<stdio.h>

int main()
{
    int mat[3][3] = {
                     {1,2,3},
                     {4,5,6},
                     {7,8,9}
                    };

    int i=0,j=0;

    for(i=0;i<3;i++)
    {
        if(i%2 == 0)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",mat[i][j]);
            }
        }
        else if(i%2 !=0)
        {
            for(j=2;j>=0;j--)
            {
                printf("%d ",mat[i][j]);
            }
        }
    }
}