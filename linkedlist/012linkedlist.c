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

void traverse(int n0, int n1, int n2)
{
    struct Node *ptr = head;
    while(ptr!=NULL)
    {
        if(n0!=0)
        {
            ptr->data == 0;
            n0--;
        }
        else if(n1!=0)
        {
            ptr->data == 1;
            n1--;
        }
        else if(n2!=0)
        {
            ptr->data = 2;
            n2--;
        }
    }
}

void count()
{
     int count[3] = {0, 0, 0};  
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        count[ptr->data] += 1;
        ptr = ptr->next;
    }
 
    int i = 0;
    ptr = head;
 
    while (ptr != NULL)
    {
        if (count[i] == 0)
            ++i;
        else
        {
            ptr->data = i;
            --count[i];
            ptr = ptr->next;
        }
    }
  //  traverse(n0,n1,n2);
}


void display()
{
    printf("\n");  
   struct Node *trav = head;
   while(trav)
   {
       printf("%d ", trav->data);
       trav = trav->next;
   }
}



int main()
{
    create(1);
    create(2);
    create(2);
    create(1);
    create(2);
    create(0);
    create(0);
    create(2);
    create(0);
    create(1);
    display();
    count();
    display();

}