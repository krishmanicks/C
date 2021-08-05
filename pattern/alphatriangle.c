/*
    A 
    A B 
    A B C 
    A B C D 
    A B C D E
    A B C D E
    A B C D
    A B C
    A B
    A
            */


#include <stdio.h>

int main() 
{   
    int ch = 64;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",(ch+j));
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",(ch+j));
        }
        printf("\n");
    }
    
    return 0;
}