#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;
};

struct Node *newNode(int key)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = key;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

int i=0;
int indexlatest =0;

void serialize(struct Node* root, int a[])
{   
     if(root == NULL)
	    {   
	        a[i++] = -1;
	        return ;
	    }   
            a[i] = root->data;	
            i++;
	        serialize(root->left, a);       
	        serialize(root->right, a);
}

struct Node *deserialize(int a[])
{   
    if(indexlatest == i || a[indexlatest] == -1)
    {   
        indexlatest++;
        return NULL;
    }
    struct Node *root = newNode(a[indexlatest]);
    indexlatest++;
    
    root->left = deserialize(a);
    root->right = deserialize(a);
    
    return root;
}

struct Node *display(struct Node *root)
{   
    if(root == NULL)
    {
        return 0;
    }
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}

void main()
{  
    struct Node *root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(15);
    root->left->left = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);
    
    int a[10000];
    serialize(root, a);
     for(int j=0;j<i;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n\n");
    struct Node *temp = deserialize(a);
    display(temp);
}






