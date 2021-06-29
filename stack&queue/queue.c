#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head= NULL, *tail=NULL;

void queue(int key)
{
  struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
  node->data = key;
  node->next = NULL;

  if(head==NULL)
  {
      head=tail=node;
  }
  else
  {
      tail->next = node;
      tail=node;
  }
}


  void display()
  {
      struct Node *trav=head;
      while(trav)
      {
          printf("%d\n",trav->data);
          trav=trav->next;
      }
  }

  void dequeue()
  {     
      printf("\n");
      struct Node *temp=head;
      head = temp->next;
      free(temp);
  }

 
 int main()
 {
     queue(1);
     queue(2);
     queue(3);
     queue(4);
     display();
     dequeue();
     display();
     return 0;
 }