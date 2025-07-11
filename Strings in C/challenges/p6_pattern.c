/*6.Implement pattern matching using the KMP algorithm
Explain and implement the Knuth-Morris-Pratt algorithm for substring search, focusing on preprocessing the pattern to avoid redundant comparisons.
Example: Pattern: "abc"
Text: "ababcabcab"
Output: Pattern found at indices 2, 5*/


#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char p[100];
    printf("Enter the text\n");
    scanf("%[^\n]",s);
    printf("Enter the pattern\n");
    scanf(" %[^\n]",p);
    printf("output: pattern found at indices:");

    for(int i=0;s[i];i++)
    {
    char *pos = strstr(&s[i],p);
    if(pos!=NULL)
    {
        printf("%d, ",pos-s);
        i=pos-s;
    }
    }

    
}