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

void addmiddle(struct DLL **head)
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
  
  
    int c=count_node(*head);
    c=c/2;

    struct DLL *mid=*head;
    for(int i=0;i<c-1;i++)
    {
        mid=mid->next;
    }

    temp->next=mid->next;
    temp->prev=mid;
    mid->next=temp;


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

int main()
{

  struct DLL *head=NULL;

  printstart(head);
  addmiddle(&head);
  addmiddle(&head);
  addmiddle(&head);
  addmiddle(&head);
  printstart(head);

}