#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;
    struct Node *prev;
};

struct Node *newNode(int key)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = key;
    newNode->left=NULL;
    newNode->right=NULL;
  //  printf("%dhello ",newNode->data);
    return newNode;
}

struct Node *head = NULL;
struct Node *tail = NULL;

void addNode(struct Node *node)
{   
    if(head == NULL)
    {
        head = tail = node;
    }
    else
    {
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
}

void pass(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }

    pass(root->left);
   // printf("%d ",root->data);
    addNode(root);
   pass(root->right);
}


void display()
{
    struct Node *temp = head;

    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


void main()
{  
    struct Node *root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(15);
    root->left->left = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);

    pass(root);
    display();
}