#include <stdio.h>


int a[10];
int top=-1;
void push(char c)
{
    if(top==10)
    {
        printf("Stack is full");
    }
    else
    {
        a[++top]=c;
    }

}
int pop()
{
    if(top==-1)
    {
        printf("The stack is empty!");
        return 0;
    }
    else
    {
        char c = a[top--];
        return c;
    }

}

int Checker(char a[],int n)
{
    int i;
    char c;
     for(i=0;i<n;i++)
     {
        switch(a[i])
        {
            case '{':
              push(a[i]);
              break;
            case '[':
              push(a[i]);
              break;
            case '(':
              push(a[i]);
              break;
            case '}':
                c = pop();
                if(c!='{')
               {
                   return 0;
               }
               break;
            case ']':
               c = pop();
               if(c!='[')
               {
                   return 0;
               }
               break;
            case ')':
               c = pop();
               if(c!='(')
               {
                   return 0;
               }
               break;
        }
     }

     if(top==-1)
     {
         return 1;
     }
    else
    {
        return 0;
    }
}


int main()
{
   // char a[]={'{','(','[',']',')', '}'};
   // char a[]={'{'};
   char a[] = "{([])}";
    int n = sizeof(a)/sizeof(a[0]);

    int check = Checker(a,n);

    if(check)
    {
        printf("Paranthesis are matched");
    }
    else
    {
        printf("It is not matched");
    }
}