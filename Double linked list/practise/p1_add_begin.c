#include<stdio.h>
#include<stdlib.h>


struct DLL
{
    int data;
    struct DLL *prev;
    struct DLL *next;
};


int count_node(struct DLL *head)
{
  
   struct DLL *temp=head;
   int count=0;

   while(temp!=NULL)
   {
    count++;
    temp=temp->next;
   }
   return count;
  

}

void addbegin(struct DLL **head)
{
   struct DLL *temp,*first=*head;

   temp=(struct DLL*)calloc(1,sizeof(struct DLL));

   printf("enter node data:");
   scanf("%d",&temp->data);


   if(*head==NULL)
   {
    *head=temp;
    return;
   }

   temp->next=first;
   first->prev=temp;
   *head=temp;

   return;

}



void printstart(struct DLL *head)
{
    if(head==NULL)
    {
      printf("no node present:\n");
      return ;

    }
    struct DLL *temp=head;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
 return;

}

void printend(struct DLL *head)
{
    if(head==NULL)
    {
      printf("no node present:\n");
      return ;

    }
    struct DLL *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");
    return;

}

int main()
{

  struct DLL *head=NULL;

  printstart(head);
  addbegin(&head);
  addbegin(&head);
  addbegin(&head);
  addbegin(&head);
  printstart(head);

}