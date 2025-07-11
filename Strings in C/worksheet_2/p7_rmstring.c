/*Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"*/


#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("input str1= ");
    scanf(" %[^\n]", str1);
    printf("str2 = ");
    scanf(" %[^\n]", str2);

    int i, j, k = 0;

    for (i = 0; str1[i]; i++) 
    {
        int found = 0;
        for (j = 0; str2[j]; j++) 
        {
            if (str1[i] == str2[j]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            str1[k++] = str1[i]; 
        }
    }
    str1[k] = '\0';

    printf("output: %s", str1);

    return 0;
}
