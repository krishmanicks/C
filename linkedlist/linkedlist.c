#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail=NULL;



void create()
{
    int key;
    printf("enter the element to insert: ");
    scanf("%d",&key);
 struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next= NULL;
    
    if(head==NULL)
    {
        head=tail=temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }

}
 
 void delete()
 {
     struct Node *var=head;
     head = var->next;
     free(var);

 }


void display()
{
    struct Node *trav = head;
    while(trav)
    {
        printf("%d -> ",trav->data);
        trav= trav->next;
    } 
    printf("NONE"); 
}
int main()
{  
     int ch;
    while(ch!=4)
    {
        
    printf("\nenter the choice:\n");
    printf("1.create 2.display 3. delete 4.exit: ");
    scanf("%d",&ch);
   
    switch (ch)
    {
    case 2:
        display();
        break;
    case 1:
        create();
        break;
    case 3:
        delete();
        break;
    default:
      break;
    }
    }  
   
}