#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);  //9
    int i,mini=0, maxi=n-1; // value = 9
    int m = a[n-1] +1; //value = 9 pointing
    printf("%d\n",m);
	
	for(i=0; i<n; i++)
    {
	    if(i%2 == 0)
        {
            a[i] = a[i] + ((a[maxi] % m) * m);
            maxi--;
        }
        else
         {
            a[i] = a[i] + ((a[mini] % m) * m);
            mini++;
        }

    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]/m);
    }

    
}

//