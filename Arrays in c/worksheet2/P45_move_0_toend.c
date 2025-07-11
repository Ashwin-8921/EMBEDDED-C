/* Move all zeros to end of array
Question description:
Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
Sample data:
Input: 1 0 2 0 0 3 4
Expected output:
Output: 1 2 3 4 0 0 0*/

#include <stdio.h>

void moveZeros(int a[], int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j++] = a[i];
        }
    }

    while (j < n) {
        a[j++] = 0;
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    moveZeros(a, n);

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
