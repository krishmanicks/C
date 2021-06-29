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

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
}

void pop()
{
    printf("\n");
    struct Node *temp=head;
    head = temp->next;
    free(temp);
}


int main()
{
push(1);
push(2);
push(3);
display();
pop();
display();

}