/*2. Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a doubly linked list.

Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)

Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5

*/


#include <stdio.h>
#include <stdlib.h>

typedef struct dll {
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
    dll* temp = head;
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int removeloop(dll* head) 
{
    dll *slow = head, *fast = head;

    while (slow && fast && fast->next) 
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) 
        {
            dll* ptr1 = head;
            dll* ptr2 = slow;

            if (ptr1 == ptr2) 
            {
                while (ptr2->next != ptr1)
                    ptr2 = ptr2->next;
                ptr2->next = NULL;
            } 
            else 
            {
                while (ptr1->next != ptr2->next) 
                {
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
                ptr2->next = NULL;
            }
            return 1;
        }
    }
    return 0;
}

int main() {
    dll* head = NULL;

    addend(&head, 1);
    addend(&head, 2);
    addend(&head, 3);
    addend(&head, 4);
    addend(&head, 5);


    head->next->next->next->next->next = head->next;
    head->next->prev = head->next->next->next->next;

    if (removeloop(head)) 
    {
        printf("Loop detected and removed.\n");
    } 
    else 
    {
        printf("No loop found.\n");
    }

    printf("List after removal: ");
    printlist(head);

    return 0;
}
