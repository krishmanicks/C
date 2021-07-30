#include<stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    scanf("%d",&n);
    int matrix[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            scanf("%d",&matrix[i][j]);
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(&matrix[i][j] , &matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        int s = 0;
        int e = n-1;

        while (s<=e)
        {
            swap(&matrix[i][s], &matrix[i][e]);
            s++;
            e--;
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }  

}