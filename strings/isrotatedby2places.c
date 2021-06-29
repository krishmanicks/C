#include<stdio.h>
#include<string.h>


void isrotated(char a[], char b[])
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    char temp1;

    if(len1<2 && len2<2)
    {
        if(a==b)
        {
            printf(" True");    
        }
        else
        {
            printf("False");
        }   
    }
}

int main()
{
    char s1[] ="amazon";
    char s2[] ="azonam";
    isrotated(s1,s2);
}