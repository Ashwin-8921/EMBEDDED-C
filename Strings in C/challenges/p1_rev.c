/*1. Reverse a string in-place without using extra memory
Explain your approach to reversing a string by swapping characters from the start and end moving towards the center, without using extra storage.
 
Example: Input: "interview"
Output: "weivretni"*/


#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) 
    {
        str[start] ^= str[end];
        str[end]   ^= str[start];
        str[start] ^= str[end];

        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Input: ");
    scanf("%s", str); 
    reverseString(str);
    printf("Output: %s\n", str);
    return 0;
}
