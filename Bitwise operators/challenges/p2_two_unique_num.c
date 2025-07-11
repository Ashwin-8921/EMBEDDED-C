/*In an array where all numbers appear twice except two numbers that appear once, identify those two unique numbers.*/

#include <stdio.h>

void unique(int a[], int n) {
    int xor = 0;
    for (int i = 0; i < n; i++)
        xor^= a[i];

    int diff = xor & -xor;

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] & diff)
            x ^= a[i];
        else
            y ^= a[i];
    }

    printf("unique numbers are: %d and %d\n", x, y);
}

int main() 
{
    int n;
    printf("enter no of ele:");
    scanf("%d", &n);

    int a[n];
    printf("enter the ele:");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    unique(a, n);
}
