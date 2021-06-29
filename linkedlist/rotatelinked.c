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

void rotate()
{   printf("\n\n");
    int k=3;
    struct Node *temp = head;
    struct Node *last = tail;
    last->next = temp;
    int index = 0;
    while(index < k-1)
    {
        temp = temp->next;
        index++;
    }
    head = temp->next;
    temp->next = NULL;   
}


int main()
{
  //  create(1);
    create(2);
   // create(3);
    create(4);
  //  create(5);
  //  create(6);
    create(7);
    create(8);
    create(9);
    display();
    rotate(head);
    display();
}