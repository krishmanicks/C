#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int closestNumber(int N , int M) 
{
    int q,a,b;
    q = N/M;
    a = M*q;
       
    if((N*M) > 0)
        b = M*(q+1);
    else 
        b = M*(q-1);
            
    if((abs(N-a)) < abs(N-b))
        return a;

    return b;
}

void main()
{
    printf("%d",closestNumber(-15,6));
}