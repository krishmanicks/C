#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL, *tail = NULL;

void create(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next= NULL;

    if(head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void display()
{
    struct Node *trav = head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav = trav->next;
    }
    printf("\n");
}

    void reorder(int n)
{
    struct Node *trav = head;
    struct Node *temp = head;
    struct Node *last = tail;
    int i=1;
    int j=n;
    int count = (n/2);

    while(i<=j)                             
    {   
        if(i==j)
        {
            printf("%d ",trav->data);      
            break;    
        }
        else
        {
        printf("%d ",trav->data);          
        printf("%d ",last->data);
        trav = trav->next;     
            while(temp->next!=last)
            {   
                temp = temp->next;  
            }
            last = temp;
            temp = head;
            i++;
            j--;
            count--;
    }
    }
            
    head = temp;
}


int main()
{
    int a[] = {1,7,3,4};
    int n=4;
    for(int i=0;i<n;i++)
        {
            create(a[i]);
        }
    display();
    reorder(n);

    return 0;
}