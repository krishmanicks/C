#include<stdio.h>

void main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+1, s, s+3, s+2};
    char ***p;
    p = ptr;
    ++p;
    printf("%s", **++p+2);
}