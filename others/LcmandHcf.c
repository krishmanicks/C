#include<stdio.h>

int main()
{
    int a,b;
    int gcd = 0,lcm=0;
    int i;
    scanf("%d %d",&a, &b);
    
    for(i=1;i<=a;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }

    lcm = (a*b)/gcd;

    printf("Lcm is : %d\nHcf is : %d",lcm,gcd);
}