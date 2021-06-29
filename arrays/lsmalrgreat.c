#include<stdio.h>
#include <stdlib.h>


int lsmallRgreat(int a[], int n)
{
  int i;
  
		int max=a[0];
		int res=-1;
		for(int i=1;i<n;i++) 
        {
			if(a[i]>=max) 
            {
				max=a[i];
				if(res==-1 && i<n) 
                {
					res=a[i];
				}
			}
			else
             {
				if(a[i]<res)
                 {
					res=-1;
				}
			}
		}
		printf("%d",res);
	}


int main()
{
   // int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
   int arr[] = {4,3,2,7,8,9};
    int n=6;   
    lsmallRgreat(arr,n);
}