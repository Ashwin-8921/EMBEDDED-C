/*10. Print all permutations of a string in lexicographic order
Generate and print every permutation of the given string sorted alphabetically.
 
Example: Input: "abc"
Output: "abc", "acb", "bac", "bca", "cab", "cba"*/


#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char str[], int left, int right) 
{
    if (left == right) 
    {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++) 
    {
        swap(&str[left], &str[i]);
        permute(str, left + 1, right);
        swap(&str[left], &str[i]);
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("Permutations:\n");
    permute(str, 0, len - 1);

    return 0;
}
