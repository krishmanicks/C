#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "moaom";
    int count = 0;
    int n = strlen(s);
    char c = 'a';

    if(n < 2)
    {
        printf("error code: -1");
    }

    else if(s[0] != s[n-1])
    {
        printf("0");
    }

    else 
    {
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'a')
                count++;
        }
        printf("%d ",count);
    }
}