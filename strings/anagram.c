#include<stdio.h>
#include<string.h>

void sort(char string[], int n)
{  
     int i,j,temp;
    for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
}

void anagram(char a[], char b[])
{
    int i=0;
    int n = strlen(a);
    int m = strlen(b);

    if(n!=m)
    {
        printf("not an anagram");   
    }
    else
    {   int count =0;
        sort(a,n);
        sort(b,m);
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                count++;
            }
        }
        if(count==0 ? printf("yes") : printf("No"));

    }

}

int main()
{
    char a[] = "geeksforgeeks";
    char b[] = "forgeeksgeecs";
    anagram(a,b);

}