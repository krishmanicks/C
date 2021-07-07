#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void create(struct Node *ad[], int n)
{
    struct Node *newNode;
    int i,j,k,val;

    for(i=0;i<n;i++)
    {
        struct Node *last = NULL;
        printf("\n Enter the no. of neighbours of %d ",i+1);
        scanf("%d",&k);
        
        for(j=0;j<k;j++)
        {
            printf("Enter the value of %d neighbours of %d ",j+1, i+1);
            scanf("%d",&val);
            newNode = (struct Node*)malloc(sizeof(struct Node *));
            newNode->data = val;
            newNode->next = NULL;

            if(ad[i] == NULL)
                ad[i] = newNode;
            else
                last->next = newNode;
            
            last = newNode;
        }
    }
}

void printgraph(struct Node *ad[], int n)
{
    struct Node *ptr = NULL;
    int i,j;
    for(i=0;i<n;i++)
    {
        ptr = ad[i];
        printf("\nThe neighbours of %d are : ",i+1);

        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr = ptr->next;
        }
    }
}


int main()
{
    int i,j,k,nodes;
    printf("Enter the nodes ");
    scanf("%d",&nodes);

    struct Node *ad[nodes];

    for(i=0;i<nodes;i++)
    {
        ad[i] = NULL;
    }
    create(ad,nodes);
    printgraph(ad,nodes);

}