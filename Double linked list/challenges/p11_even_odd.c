/*Segregate Even and Odd Nodes
Input: 1 → 2 → 3 → 4 → 5 → 6
Expected Output: 2 → 4 → 6 → 1 → 3 → 5*/

#include <stdio.h>
#include <stdlib.h>

typedef struct dll {
    int data;
    struct dll* prev;
    struct dll* next;
} dll;

dll* newdll(int val) 
{
    dll* temp = (dll*)malloc(sizeof(dll));
    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void addend(dll** head, int val) 
{
    dll* temp = newdll(val);
    if (*head == NULL) 
    {
        *head = temp;
        return;
    }
    dll* cur = *head;
    while (cur->next) 
    {
        cur = cur->next;
    }
    cur->next = temp;
    temp->prev = cur;
}

void printlist(dll* head) 
{
    dll* temp = head;
    while (temp) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

dll* segregate(dll* head) 
{
    if (head == NULL) 
        return NULL;

    dll* evenHead = NULL;
    dll* evenTail = NULL;
    dll* oddHead = NULL;
    dll* oddTail = NULL;

    dll* curr = head;
    while (curr) 
    {
        dll* nextNode = curr->next;
        curr->next = NULL;
        curr->prev = NULL;

        if (curr->data % 2 == 0) 
        {
            if (evenHead == NULL) 
            {
                evenHead = evenTail = curr;
            } 
            else 
            {
                evenTail->next = curr;
                curr->prev = evenTail;
                evenTail = curr;
            }
        } 
        else 
        {
            if (oddHead == NULL) 
            {
                oddHead = oddTail = curr;
            } 
            else 
            {
                oddTail->next = curr;
                curr->prev = oddTail;
                oddTail = curr;
            }
        }

        curr = nextNode;
    }

    if (evenTail) 
    {
        evenTail->next = oddHead;
        if (oddHead) 
            oddHead->prev = evenTail;
        return evenHead;
    } 
    else 
    {
        return oddHead;
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
        addend(&head, val);
    }

    head = segregate(head);

    printf("segregated list: ");
    printlist(head);

    return 0;
}
