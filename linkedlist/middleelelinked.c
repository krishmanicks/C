#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL, *tail = NULL;

void create(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = key;
    node->next = NULL;

    if(head== NULL)
    {
        head = tail = node ;
    }
    else
    {
        tail->next = node;
        tail = node;
    }    
}


void display()
{
   struct Node *trav = head;
   while(trav)
   {
       printf("%d ", trav->data);
       trav = trav->next;
   }
}

void middle()
{   
    struct Node *p = head;
    struct Node *q = head;
     int x = 0;
    while(p)
    {
        if(x==1)
        {
            q=q->next;
            p=p->next;
            x--;
        }
        else
        {
            x++;
            p=p->next;
        }       
    }
    printf("\n%d",q->data);   
}


int main()
{
    create(2);
    create(4);
    create(6);
    create(7);
    create(5);
    create(1);
    display();
    middle();
}