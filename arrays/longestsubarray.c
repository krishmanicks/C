
#include <stdio.h>

int SubArray(int a[],int n,int k)
{
     int i,sum=a[0],start=0,max=0,longstart=0,longend=0;
     for(i=1;i<n;i++)
       {
          while(sum>k && start<i-1)
          {           
              sum-=a[start];        
              start++;             
          }

          if(sum == k)
          {
                printf("Found:%d to %d\n",start,i-1);
                if((i-start ) > max)
                {
                   max = i-start;   
                   longstart = start; 
                   longend=i-1;       
                }
          }
          
          if(i<n)
          {
            sum += a[i]; 
          }

          
        }
        return max;
}



void main()
{
    int a[]={-1,2,3,1,1,1,1,1,3};
    int n =sizeof(a)/sizeof(a[0]);
     int k=5;
    printf("\nLARGEST:%d",SubArray(a,n,k));

}