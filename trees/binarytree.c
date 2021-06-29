#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* create()
{   
    int x;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node*));
    printf("enter value: ");
    scanf("%d",&x);
    
    if(x==-1)
    {
        return 0;
    }
    newNode->data=x;

    printf("enter leftchild %d ",x);
    newNode->left = create();

    printf("enter rightchild %d ",x);
    newNode->right = create();

    return newNode;
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

void isbst(struct Node *root)
{
    if(root == NULL)
        {
        printf("hello everyone"); 
        return;
        }
    if(root->left->data > root->data)
    {
        printf("\n not a bst");
        return;
    }
    if(root->right->data < root->data)
    {
        printf("\n not a bst");

        return;
    }
    printf("\nit is a bst");
}

int isbstt(struct Node *root, struct Node *l, struct Node *r)
    {
         if(root == NULL) 
         {  
            return 1;
         }
        
        if(l!= NULL && root->data <= l->data)
            return 0;
            
        if(r!= NULL && root->data >= r->data)
            {
                return 0;
            }

        printf("%d fuck",l);
        
        return isbstt(root->left,l,root) && isbstt(root->right,root,r);
    }
    
   int isBST(struct Node* root) 
    {
        return isbstt(root,NULL,NULL);
    }

void main() 
{  
   struct Node *root = NULL;
   root = create();
   preorder(root);
   //isbst(root);
   if(isBST(root))
        printf("true");
   else
        printf("false");
}