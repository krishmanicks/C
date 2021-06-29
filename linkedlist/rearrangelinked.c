#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL,*tail = NULL;


void Insert(int key)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;
    if(head == NULL)
    {
    head=tail=node;
    }
    else
    {
         tail->next = node;
        tail = node;
        tail->next = NULL;
    }
}

void Rearrange()
{
    struct Node *even=head->next;
    struct Node *odd=head->next->next;
    struct Node *store=odd;
    struct Node *first=head;
    struct Node *tri=head->next;
     struct Node *temp=head->next;

    while(odd!=tail && temp!=tail)
    {   
        temp->next = (odd->next!=NULL) ? odd->next:NULL;
        odd=(odd->next->next!=NULL) ? odd->next->next:NULL;
        first->next=store;
        store->next = even; 
        first=first->next;
        store = odd; 
        temp=temp->next;
     }
}




void display()
{
    struct Node *trav=head;
    if(trav==NULL)
    {
        printf("NULL");
    }
    while(trav)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}

void main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Insert(60);
    Insert(70);
    Insert(80);

    display();
    Rearrange();
    display();

}
