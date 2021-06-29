#include <stdio.h>

int main() 
{
    int m=4,n=3;
    int x[] = {2,3,4,5};
    int y[] = {1,2,3};
     int i = 1,j = 1;
     int a=0,b=0;
    int res1=1,res2=1; 
    int count = 0;
   
   for(a=0;a<m;a++)
   { 
      b = 0;
    while(i <= x[a] || j <= y[b])
    {   
        if(i <= x[a])
        {
        res1 = res1 * y[b];
        i++;
        }
        if(j <= y[b])
        {
         res2 = res2 * x[a];
         j++;
        }
    }
    
    if(res1 > res2)
        {
            count++;
        }
}
    
    printf("%d\n",res1);
    printf("%d\n",res2);
    printf("%d\n",count);
    
    return 0;
}