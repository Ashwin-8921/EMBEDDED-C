/*Delete given Element from Linked List( Display NULL if no such element found).*/


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

void delete_num(struct DLL **head,int num)
{
    if(*head==NULL)
    {
      printf("no node present:\n");
      return ;

    }
    
    struct DLL *temp=*head;

    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            break;
        }
        temp=temp->next;
    }


    if (temp == NULL)
    {
        printf("Node with value %d not found\n", num);
        return;
    }

    if (temp == *head)
    {
        *head = temp->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    if (temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
        return;
    }
    


    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);



}

int main()
{

  struct DLL *head=NULL;

  printstart(head);
  addend(&head);
  addend(&head);
  addend(&head);
  addend(&head);
   addend(&head);
    addend(&head);
    printstart(head);
    int num;
    printf("enter num to be deleted: ");
    scanf("%d",&num);
    delete_num(&head,num);
       printstart(head);
  

}