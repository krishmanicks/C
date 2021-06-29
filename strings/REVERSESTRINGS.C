#include<stdio.h>

int reverse(char *b, char *e)
{
    char temp;
    while(b<e)
    {
        temp = *b;
        *b++ = *e;
        *e-- = temp;
    }
}

int reversewords(char *s, int n)
{
    char *start =s;
    char *temp = s;

    while(*temp)
    {
        temp++;
        if(*temp == '\0')
        {
            reverse(start, temp-1);
        }
        else if(*temp =='.')
        {
             reverse(start, temp-1);
             start = temp+1;
        }
        
        }

        reverse(s,temp-1);
    }


int main()
{
    char a[] = "i.like.this.program.very.much";
    int n=sizeof(a)/sizeof(a[0]); 
  //int n=29;
  reversewords(a,n);
   
   
   for(int i=0;i<n;i++)
   {
       printf("%c ",a[i]);
   }
    
    return 0;
}