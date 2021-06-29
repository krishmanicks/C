#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL,*head1=NULL, *tail = NULL;


void enqueue1(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = key;
    node->next = NULL;

    if(head ==  NULL)
    {
        head = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void display()
{
    struct Node *trav = head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav = trav->next;
    }
}

void pop()
{
     printf("\n");
    struct Node *temp=head;
    head = temp->next;
    free(temp);
}

void dequeue()
{   
    struct Node *trav = head;
   struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->next = NULL;
    struct Node *result=NULL;
   while(trav)
   {
      if(head1 == NULL)
      {
          head1 = node;
      }
      else
      {
          node->next = head;
          head = node;
      }
      trav = trav->next;
   }
    printf("%d ",head->data);
   pop(head1);
   while(trav)
{
     if(head == NULL)
      {
          head = node;
      }
      else
      {
          node->next = head;
          head = node;
      }
      trav = trav->next;
}
}

       

int main()
{
    enqueue1(1);
    enqueue1(2);
    enqueue1(3);
    display();
    dequeue();
     display();
}
