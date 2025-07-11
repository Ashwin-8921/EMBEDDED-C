/*50. Find the missing two numbers in an array 
Question description: 
Write a C program to find two missing numbers from an array containing numbers from 1 ton+2 
Sample data 
Input: 1246 
Expected output 
Misang numbers: 35*/



#include <stdio.h>

int has(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return 1;
    return 0;
}

int main() {
    int n, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Missing numbers: ");
    for (int i = 1; i <= n + 2; i++) {
        if (!has(a, n, i)) {
            printf("%d ", i);
            count++;
            if (count == 2)
                break;
        }
    }
    printf("\n");
    return 0;
}
