/*13. Reordering by Parity Challenges
Question:
Write a C program to place all even-numbered nodes after odd-numbered nodes.

Sample data:
List: 1 2 3 4 5 6

Expected output:
Reordered list: 1 3 5 2 4 6

*/


#include <stdio.h>
#include <stdlib.h>

typedef struct dll {
    int data;
    struct dll* next;
    struct dll* prev;
} dll;

dll* newdll(int data) 
{
    dll* temp = (dll*)malloc(sizeof(dll));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

dll* addend(dll* head, int data) 
{
    dll* temp = newdll(data);
    if (head == NULL)
        return temp;
    dll* curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void printlist(dll* head) 
{
    while (head != NULL) 
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

dll* reorderbyparity(dll* head) 
{
    if (head == NULL) return NULL;

    dll* oddhead = NULL;
    dll* oddtail = NULL;
    dll* evenhead = NULL;
    dll* eventail = NULL;

    dll* curr = head;
    while (curr != NULL) 
    {
        dll* nextnode = curr->next;
        curr->next = NULL;
        curr->prev = NULL;

        if (curr->data % 2 == 1) 
        {
            if (oddhead == NULL) 
            {
                oddhead = oddtail = curr;
            } 
            else 
            {
                oddtail->next = curr;
                curr->prev = oddtail;
                oddtail = curr;
            }
        } 
        else 
        {
            if (evenhead == NULL) 
            {
                evenhead = eventail = curr;
            } 
            else 
            {
                eventail->next = curr;
                curr->prev = eventail;
                eventail = curr;
            }
        }
        curr = nextnode;
    }

    if (oddtail != NULL) 
    {
        oddtail->next = evenhead;
        if (evenhead != NULL)
            evenhead->prev = oddtail;
        return oddhead;
    } 
    else 
    {
        return evenhead;
    }
}

int main() 
{
    dll* head = NULL;
    int n, val;

    printf("enter number of nodes: ");
    scanf("%d", &n);

    printf("enter node values:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &val);
        head = addend(head, val);
    }

    head = reorderbyparity(head);

    printf("reordered list: ");
    printlist(head);

    return 0;
}
