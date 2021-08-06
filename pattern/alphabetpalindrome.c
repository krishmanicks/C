#include<stdio.h>

/*
   A 
   A B A  
   A B C B A 
   A B C D C B A 
   A B C D E D C B A 
    
                    */

int main()
{
    int n = 5;  
    int i,j;
    
    for(i=0;i<n;i++)
    {   
        int ch = 65;
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        for(;j>=1;j--)
        {   
           printf("%c ",ch);
           ch--;
        }
        printf("\n");
    }
    
}


