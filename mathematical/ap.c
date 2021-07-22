#include <stdio.h>

int nthTermOfAP(int A1, int A2, int N) 
{       
    int d = A2 - A1;
    int ans = A1 + (N-1)*d;
    printf("%d",ans);
}

int main()
{
    nthTermOfAP(2,3,10);  
    return 0;
}