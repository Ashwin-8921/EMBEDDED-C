/*Detect a Loop
Input: 1 → 2 → 3 → 4 → 5 (node 5 points back to node 2)
Expected Output: Loop detected. Starting node of loop is 2*/



#include <stdio.h>
#include <stdlib.h>

typedef struct dll {
    int data;
    struct dll* prev;
    struct dll* next;
} dll;

dll* newdll(int val) {
    dll* temp = (dll*)malloc(sizeof(dll));
    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void addend(dll** head, int val) {
    dll* temp = newdll(val);
    if (*head == NULL) {
        *head = temp;
        return;
    }
    dll* curr = *head;
    while (curr->next)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
}

void detectloop(dll* head) {
    dll *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            dll* ptr1 = head;
            dll* ptr2 = slow;
            while (ptr1 != ptr2) {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            printf("loop detected. starting node is %d\n", ptr1->data);
            return;
        }
    }
    printf("no loop found.\n");
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

    detectloop(head);

    return 0;
}
