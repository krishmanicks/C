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

    if(head == NULL)
    {
        head = tail = node;
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

struct Node *reverse(struct Node *head, int k)
{
    printf("\n");
   // int k = 4;
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next=NULL;

    int count = 0;
     while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next !=  NULL)
    {
       head->next = reverse(next, k);
    }
  return prev;
}



int main()
{
    create(1);
   // create(2);
    create(3);
    create(4);
   // create(5);
   // create(6);
    create(7);
    create(9);
    create(10);
    create(1);
    display();
    head = reverse(head, 2);
     display();
}