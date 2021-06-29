#include <stdio.h>
#include <stdlib.h>

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

    if(head == NULL)
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


int reverse()
{
    printf("\n");
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next=NULL;

    while(current!=NULL)
    {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    }
    head = prev;
}


int main()
{   
    int a[] = {2,1,4,6,7,5,1};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        create(a[i]);
    }
    display();
    reverse();
    display();
}