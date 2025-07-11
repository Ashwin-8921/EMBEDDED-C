/*
List Rotation Challenges
Question:
Write a C program to rotate a double linked list to the right by k places.*/

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

    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &val);
        addend(&head, val);
    }

    scanf("%d", &k);

    head = rotate(head, k);

    printlist(head);

    return 0;
}
