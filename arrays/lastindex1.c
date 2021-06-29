// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[] = "0000111";
    int i=0;
    int count=0;
    while(a[i++]!='\0')
    {
        count++;
       // i++;
    }
    
    if(a[count-1] == 49)
    {
        printf("%d ",count);
    }
    else
    {
        printf("-1");
    }
}