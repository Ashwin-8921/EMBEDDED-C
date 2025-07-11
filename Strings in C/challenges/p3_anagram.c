/* Check if two strings are anagrams without using built-in sort
Determine if two strings contain the exact same characters in any order, without sorting them.
Example: Input: "listen", "silent"
Output: true*/


#include <stdio.h>
#include <string.h>

void anagram(char s[], char p[])
{
    int a[256] = {0};
    int b[256] = {0};
    int i;

    for(i = 0; s[i]; i++)
        if(s[i] != ' ')
            a[(unsigned char)s[i]]++;

    for(i = 0; p[i]; i++)
        if(p[i] != ' ')
            b[(unsigned char)p[i]]++;

    for(i = 0; i < 256; i++)
    {
        if(a[i] != b[i])
        {
            printf("false\n");
            return;
        }
    }
    printf("true\n");
}

int main()
{
    char s[100], p[100];
    printf("input : ");
    scanf("%[^\n]", s);
    scanf(" %[^\n]", p);
    anagram(s, p);
}
