/*2. Find the first non-repeating character in a given string
Identify the first character that does not repeat anywhere else in the string, optimizing for time and space complexity.
Example: Input: "swiss"
Output: 'w'*/

#include<stdio.h>
#include<string.h>
 void nonrepeat(char s[])
 {
    int a[256]={0};
    int i;
    for(i=0;s[i];i++)
    {
        a[(unsigned int)s[i]]++;
    }
    for(i=0;s[i];i++)
    {
        if(a[s[i]]==1)
        {
            printf("output:%c",s[i]);
            break;
        }
    }
 }

void main()
{
    char s[50];
    printf("input: ");
    scanf("%[^\n]",s);
    nonrepeat(s);
}








