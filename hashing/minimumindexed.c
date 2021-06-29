
#include <stdio.h>

 void indexed(char str[], char patt[])
{
    int b[26];
    int i;
    
    for(i=0;i<26;i++)
    {
        b[i] = 0;
    }
    
    for(i=0;patt[i]!='\0';i++)
    {
        b[patt[i] - 'a']++;
    }
  
    
    for(i=0;str[i]!='\0';i++)
    {
        if(b[str[i] - 'a'] >= 1)
        {
             printf("%c ",str[i]);
             return;
        }
    }
    printf("-1");
    
}

int main() {
   
    char patt[] = "onkl";
    char str[] = "adcffaet";
    
    indexed(str,patt);
    
    return 0;
}