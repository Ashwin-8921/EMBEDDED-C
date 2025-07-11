//Learn how arrays are passed to functions as pointers.
#include <stdio.h>

void display(int *arr, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: %d\n", i, *(arr + i));
    }
}

int main() 
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    display(numbers, size);
    return 0;
}

