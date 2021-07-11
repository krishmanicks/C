#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;


void push(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = key;
    node->next= NULL;    

    if(head==NULL)
    {
        head=node;    
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void pop()
{
    struct Node *temp=head;
    head = temp->next;
    free(temp);
}

int isempty()
{
    if(head == NULL)
        return 1;
    else 
        return 0;
}

int mulbyb(int a)
{
    if(a<10)
    {
        printf("%d",a+10);
        return 0;
    } 

        for(int i=9;i>=2;i--)
        {
            while(a%i == 0)
            {
                push(i);
                a = a/i;
            }
        }
        if(a!=1)
        {
            printf("-1");
        }
        int b=0;

        while(!isempty())
        {
            int x = head->data;
            pop();
            b = b*10 + x;
        }
        printf("%d",b);
    }

int main()
{
    int a;
    scanf("%d",&a);
    mulbyb(a);
}