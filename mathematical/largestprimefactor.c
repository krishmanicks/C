#include<stdio.h>

int isprime(int n)
{
    int flag = 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            return 0;
        }
    }
        return 1;
    }
    
    
long long int largestPrimeFactor(int n)
{        
    int largest = 0;
    int sum = 1;
    int prev = 0;    
       
    for(int i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            largest = i;
            if(isprime(largest))
            {
                sum = largest;
            } 
            else
            {
                sum = prev;
            }
            prev = sum;
        }          
    }
    return sum;
}

int main()
{
    int n=45;
    printf("%d",largestPrimeFactor(n));
}