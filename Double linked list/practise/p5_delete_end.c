#include<stdio.h>
#include<stdlib.h>


struct DLL
{
    int data;
    struct DLL *prev;
    struct DLL *next;
};




void addend(struct DLL **head)
{

   struct DLL *temp;

   temp=(struct DLL*)calloc(1,sizeof(struct DLL));

   printf("enter node data:");
   scanf("%d",&temp->data);


   if(*head==NULL)
   {
    *head=temp;
    return;
   }

  struct DLL *last=*head;

  while(last->next!=NULL)
  {
    last=last->next;
  }

  last->next=temp;
  temp->prev=last;

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

void delete_end(struct DLL **head)
{
    if(*head==NULL)
    {
        printf("no node present:\n");
        return ;
    }
    struct DLL *del=*head;

     if (del->next == NULL)
    {
        free(del);
        *head = NULL;
        return;
    }

    
    while(del->next!=NULL)
    del=del->next;

    struct DLL *last=del->prev;

    last->next=NULL;
    free(del);



 
}


int main()
{

  struct DLL *head=NULL;

  printstart(head);
  addend(&head);
  addend(&head);
  addend(&head);
  addend(&head);
    printstart(head);
    delete_end(&head);
    delete_end(&head);
      printstart(head);
  

}
