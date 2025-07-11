/*47. Find maximum sum of k consecutive elements 
Question description:
Write a C program to find maximum sum of k consecutive elements in an array.
Sample data:
Input: 2 3 4 1 5 6 7 k = 3
Expected output:
Maximum sum of 3 consecutive elements: 18*/




#include <stdio.h>

void main() {
    int a[100], ele, k, i, j, sum, max = 0;

    printf("Enter number of elements: ");
    scanf("%d", &ele);

    printf("Input :");
    for (i = 0; i < ele; i++)
        scanf("%d", &a[i]);

    printf(" k= ");
    scanf("%d", &k);

    if (k > ele) {
        printf("k cannot be greater than the number of elements.\n");
        return;
    }

    for (i = 0; i <= ele - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) {
            sum += a[j];
        }
        if (sum > max)
            max = sum;
    }

    printf("Maximum sum of %d consecutive elements: %d\n", k, max);
}
