#include<stdio.h>
#include<stdlib.h>

struct Node
{
  char data;
  struct Node *next;
};

int hash[26];

struct Node *head = NULL, *tail=NULL;

int queue(char key)
{
  struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
  node->data = key;
  node->next = NULL;

  if(head==NULL)
  {
      head=tail=node;
  }
  else
  {
      tail->next = node;
      tail=node;
  }
}

 void dequeue()
  {     
      struct Node *temp=head;
      if(head  ==  tail)
      {
          head = tail = NULL;
      }
      else
      {
      head = temp->next;
      free(temp);
      }
  }

  int empty()
{
  if(head==NULL)
  {
    return 1;
  }
  else 
  {
    return 0;
  }

}

void display()
{  struct Node *trav=head;
    while(!empty())
    {
         if(hash[head->data - 'a'] != 1)
      {
         dequeue();
      }
       else 
     {
        printf("%c ",head->data);
        break;
     }
    }
    if(empty())
    {
        printf("# ");
    }

}



int repeat(char a[], int n)
{
    int i;
    int size  = 26;
    
    for(i=0;i<size;i++)
    {
        hash[i] = 0;
    }

    for(i=0;i<n;i++)
    { 
       queue(a[i]);
       hash[a[i]-'a']++;
       display();
    }
     printf("\n");
    for(i=0;i<size;i++)
    {
      printf("%d ",hash[i]);
    }
}

int main()
{
    char a[] = "aqizqazpn";
    int n = 9;
    repeat(a,n);
}

//a # b b