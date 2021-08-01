        /*
             *       
            * *      
           *   *     
          *     *    
         *       *   
        *         *  
       *           * 
      *             *
       *           * 
        *         *  
         *       *   
          *     *
           *   *
            * *
             *    */



#include<stdio.h>

int main()
{
    int n=15;
    int outside_space = n/2;
    int inside_space = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<outside_space;j++)
        {
            printf(" ");
        }
        if(i<n/2)
            outside_space--;
        else
            outside_space++;

        if(i == 0 || i == n-1)
            printf("*\n");
        else
        {
            printf("*");

            for(int j=0;j<inside_space;j++)
                printf(" ");
            if(i<n/2)
                inside_space+=2;
            else    
                inside_space-=2;

            printf("*\n");
        }
    }
}