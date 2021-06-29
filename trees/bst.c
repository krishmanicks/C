#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
   struct  Node *right;
    struct Node *left;
};

struct Node *GetnewNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node *root, int data)
{
    if(root == NULL)
    {
        root = GetnewNode(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else 
    {
        root->right = insert(root->right, data);
    }
    return root;
}

int Search(struct Node* root, int data)
{
    if(root  ==  NULL)
    {
        //printf("False");
        return 0;
    }
    else if(root->data == data) 
    {
       // printf("True");
        return 1;
    }
    else if(data <= root->data)
    {
        return Search(root->left, data);
    }
    else
    {
        return Search(root->right, data);
    }
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

void inorder(struct Node* node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 7);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 0);
    root = insert(root, 9);
    root = insert(root, 4);
    root = insert(root, 2);
    

    int n;
    printf("enter no: ");
    scanf("%d",&n);
    
    if(Search(root,n) == 1) 
        printf("Found\n");
    else
        printf("Not found\n");
        
    preorder(root);
    printf("\n");
    inorder(root);
    
}