/*Print the reverse of a string using recursion.
Input: "hello"
Output: "olleh"*/

#include <stdio.h>
#include <string.h>

void reverse(char str[], int index) {
    if (str[index] == '\0') return;
    reverse(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char str[50];
    printf("input : ");
    scanf("%s", str);  // read string without spaces

    printf("output: ");
    reverse(str, 0);
    printf("\n");

    return 0;
}
