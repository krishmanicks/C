#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL, *tail= NULL;


void create(int key)
{

    struct Node *node = (struct Node*)malloc(sizeof(struct NOde*));
    node->data = key;
    node->next = NULL;
    node->prev = NULL;

    if(head == NULL)
    {
        head=tail=node;
    }
    else
    {   
        node->next = NULL;
        node->prev = tail;
        tail->next = node;
        tail = node;  
        
    }
}

void traversal()
{
    struct Node *trav = head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav= trav->next;
    }
}


void reversal()
{
    printf("\n");
    struct Node *rev=tail;
    while(rev)
    {
        printf("\n%d",rev->data);
        rev=rev->prev;

    }
}

void delete()
{
    printf("\n");
    struct Node *temp = tail;
    tail = temp->prev;
    tail->next = NULL;
    free(temp);
}



int main()
{
    create(1);
    create(2);
    create(3);
    create(4);
    traversal();
    reversal();
    delete();
    traversal();
    reversal();
}