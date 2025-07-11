/*49. Find longest consecutive sequence 
Question description. 
Write a C program to find the length of the longest consecutive elements sequence. 
Sample data: 
Input: 100 4 200 1 3 2 
Expected output: 
Longest consecutive sequence length: 4 (1, 2, 3, 4)*/




#include <stdio.h>

int has(int a[], int n, int val) {
    for (int i = 0; i < n; i++)
        if (a[i] == val)
            return 1;
    return 0;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = 0;

    for (int i = 0; i < n; i++) {
        int val = a[i], len = 1;
        while (has(a, n, ++val))
            len++;
        if (len > max)
            max = len;
    }

    printf("Longest consecutive sequence length: %d\n", max);
    return 0;
}
