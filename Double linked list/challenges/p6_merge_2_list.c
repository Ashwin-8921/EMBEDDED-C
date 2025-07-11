/*Merge Two Sorted Lists
Input: List1: 1 → 3 → 5, List2: 2 → 4 → 6
Expected Output: 1 → 2 → 3 → 4 → 5 → 6*/




#include <stdio.h>
#include <stdlib.h>

typedef struct dll 
{
    int data;
    struct dll* prev;
    struct dll* next;
} dll;

void addend(dll** head, int data) 
{
    dll* newnode = (dll*) malloc(sizeof(dll));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL) 
    {
        *head = newnode;
        return;
    }

    dll* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;
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

dll* mergesorted(dll* l1, dll* l2) 
{
    dll dummy;
    dll* tail = &dummy;
    dummy.next = NULL;
    dummy.prev = NULL;

    while (l1 && l2) 
    {
        if (l1->data < l2->data) 
        {
            tail->next = l1;
            l1->prev = tail;
            l1 = l1->next;
        } 
        else 
        {
            tail->next = l2;
            l2->prev = tail;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) 
    {
        tail->next = l1;
        l1->prev = tail;
    }
    else if (l2)
    {
        tail->next = l2;
        l2->prev = tail;
    }

    return dummy.next;
}

int main() {
    dll* list1 = NULL;
    dll* list2 = NULL;
    int n1, n2, value;

    printf("Enter the number of elements in list 1: ");
    scanf("%d", &n1);
    printf("list 1:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &value);
        addend(&list1, value);
    }

    printf("Enter the number of elements in list 2: ");
    scanf("%d", &n2);
    printf("list 2:\n");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &value);
        addend(&list2, value);
    }

    dll* mergedlist = mergesorted(list1, list2);

    printf("Merged list: ");
    printlist(mergedlist);

    return 0;
}
