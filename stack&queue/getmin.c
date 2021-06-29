#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *min;


void push(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = key;
    node->next= NULL;  
   


    if(head==NULL)
    {
        head=min = node;    
    }
    else
    {
        node->next = head;
        head = node;
    }

    if(min->data > node->data)
    {
        min = node;
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

void mini()
{
    printf("\n%d",min->data);
}


int main()
{
push(11);
push(7);
push(3);
push(4);
push(9);
push(8);
display();
pop();
display();
mini();

}