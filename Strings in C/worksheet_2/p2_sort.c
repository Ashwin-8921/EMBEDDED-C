/*Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}*/


#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[n][50], temp[50];

    printf("input:");
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i -1; j++) 
        {
            if (strcmp(arr[j], arr[j+1]) > 0) 
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    printf("output");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
