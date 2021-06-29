#include <stdio.h>

int main() 
{
    int a[] ={6, 7, 4, 3, 5, 2};
    int n = 6;                   
    int i;
    int max=a[n-1];
    int b[] = {};
    int c = a[0];

    printf("%d ", max);

    for(i=n-2;i>=0;i--)                                      
        {                                                   
            if(a[i] > max)            
                {   
                   max = a[i];
                   printf("%d ",max);
                }  
        }          
} 


/*
#include <stdio.h>

int main() 
{
    int a[] ={15, 18, 5, 3, 6, 2};
    int n = 6;                   
    int i;
    int max=a[n-1];
    int b[n];
    int j = 1;
    int count=0;
     
    printf("%d ", max);
    b[0] = max;

    for(i=n-2;i>=0;i--)                                      
        {                                              
            if(a[i] > max)            
                {   
                   max = a[i];
                   printf("%d ",max); 
                   b[j++] = max;
                   count++;

                }  
        }

          printf("\n\n");
        for(i=count;i>=0;i--)
            {
                 printf("%d ",b[i]);
            }        
} 
*/