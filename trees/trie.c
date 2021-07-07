#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


struct Node
{
    bool terminal;

   struct Node *child[26];
};

struct Node *createnode()
{
    struct Node *newNode = malloc(sizeof *newNode);

    for(int i=0;i<26;i++)
    {
        newNode->child[i] = NULL;
    }

    newNode->terminal = false;
    return newNode;
}

bool trieinsert(struct Node **root, char *signedtext)
{
    if(*root == NULL)
        *root = createnode();

    unsigned char *text = (unsigned char *)signedtext;
    struct Node *temp = *root;
    int length = strlen(signedtext);

    for(int i=0;i<length; i++)
    {
        if(temp->child[text[i]] == NULL)
        {
            temp->child[text[i]] = createnode();
        }
        temp = temp->child[text[i]];
    } 
    if(temp->terminal)
    {
        return false;
    }
    else{
        temp->terminal = true;
        return true;
    }
}

void printtrie_rec(struct Node *node, unsigned char *prefix, int length)
{
    unsigned char newprefix[length + 2];
    memcpy(newprefix, prefix, length);
    newprefix[length + 1] = 0;

    if(node->terminal)
    {
        printf("word is: %s\n",prefix);
    }

    for(int i=0; i<26;i++)
    {
        if(node->child[i] != NULL)
        {
            newprefix[length] = i;
            printtrie_rec(node->child[i], newprefix, length+1);
        }
    }
}

void printtrie(struct Node *root)
{
    if(root == NULL)
    {
        printf("empty Trie");
    }

    printtrie_rec(root, NULL,0);
}

int main()
{
    struct Node *root = NULL;
    trieinsert(&root, "kit");
    trieinsert(&root, "cattle");
    trieinsert(&root, "kin");
    trieinsert(&root, "happy");
    printtrie(root);
}