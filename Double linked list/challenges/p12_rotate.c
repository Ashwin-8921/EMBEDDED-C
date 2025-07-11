/*Rotate Linked List
Input: 1 → 2 → 3 → 4 → 5, k = 2
Expected Output: 4 → 5 → 1 → 2 → 3*/

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

int length(dll* head) 
{
    int len = 0;
    dll* temp = head;
    while (temp) 
    {
        len++;
        temp = temp->next;
    }
    return len;
}

dll* rotate(dll* head, int k) 
{
    if (head == NULL || k == 0) 
        return head;

    int len = length(head);
    k = k % len;
    if (k == 0) 
        return head;

    dll* tail = head;
    while (tail->next) 
    {
        tail = tail->next;
    }

    tail->next = head;
    head->prev = tail;

    int steps = len - k;
    dll* newTail = head;
    for (int i = 1; i < steps; i++) 
    {
        newTail = newTail->next;
    }

    dll* newHead = newTail->next;

    newTail->next = NULL;
    newHead->prev = NULL;

    return newHead;
}

int main() 
{
    dll* head = NULL;
    int n, val, k;

    printf("enter number of nodes: ");
    scanf("%d", &n);

    printf("enter node values:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &val);
        addend(&head, val);
    }

    printf("enter rotation count k: ");
    scanf("%d", &k);

    head = rotate(head, k);

    printf("rotated list: ");
    printlist(head);

    return 0;
}
