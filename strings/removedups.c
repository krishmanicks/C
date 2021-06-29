#include<stdio.h>
#include<string.h>

int removedup(char a[], int n)
{
    int i,j=0;
      for(i=0;i<n;i++)
      {
          if(a[i]!=a[i+1])
          {
              printf("%c",a[i]);
          }
          else
          {
              i++;
          }
      }
}

int main()
{
    char s[] = "abbbcddde";
    int n= strlen(s);
    removedup(s,n);
}