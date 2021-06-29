#include<stdio.h>
#include<string.h>

void removedup(char *s, int n)
{
    int i,j=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(s[i] != s[i+1])
        {   
            printf("%c", s[i]);
        }
        else
        {
            j=i;
            while(s[j]==s[j+1])
            {    
                j++;
            }
            i=j;
        }
    }
}

int main()
{
    char s[] = "acaaabbbacdddd";
    int n = strlen(s);
    removedup(s,n);
}