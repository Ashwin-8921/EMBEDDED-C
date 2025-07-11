
/*5. Find the longest substring without repeating characters
Find the length or substring which has all unique characters without any repetition.
Example: Input: "abcabcbb"
Output: "abc"*/


#include <stdio.h>
#include <string.h>

int unique(char s[], int start, int end) 
{
    int visited[256] = {0};
    int i;
    for (i = start; i <= end; i++)
    {
        if (visited[(unsigned char)s[i]] == 1)
        {
            return 0;
        }
        visited[(unsigned char)s[i]] = 1;
    }
    return 1; 
}

void long_substring(char s[]) 
{
    int max_len = 0;
    int start = 0;
    int n = strlen(s);
    int i, j;

    for (i = 0; i < n; i++) 
    {
        for (j = i; j < n; j++) 
        {
            if (unique(s, i, j)) 
            {
                int current_len = j - i + 1;
                if (current_len > max_len) 
                {
                    max_len = current_len;
                    start = i;
                }
            }
        }
    }

    printf("Output: ");
    for (i = start; i < start + max_len; i++) 
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() 
{
    char s[100];
    printf("Input: ");
    scanf("%s", s);
    long_substring(s);
    return 0;
}
