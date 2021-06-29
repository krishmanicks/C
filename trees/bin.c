#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    float data;
    struct Node *left;
    struct Node *right;
};

struct Node* Create()
{
    float x;
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    printf("Enter data:");
    scanf("%f",&x);
    if(x==-1)
    {
        return 0;
    }
    node->data=x;
    printf("The left child of %f:",x);
    node->left=Create();
    printf("The right child of %f:",x);
    node->right=Create();
    return node;
}

void preorder(struct Node *root)
{   
    if(root == NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void main()
{
    struct Node *root=NULL;
    root=Create();
    preorder(root);
}