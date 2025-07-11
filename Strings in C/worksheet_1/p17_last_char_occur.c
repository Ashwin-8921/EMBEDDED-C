 /*Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'

        Output: Position: 6
*/

#include<stdio.h>
#include<string.h>

int last(char s[],char a)
{
    int i=strlen(s)-1,j;
    for(;i>=0;i--)
    {
        if(s[i]==a)
        {
            return i;
        }
    }
}
void main()
{
    char s[20];
    char a;
    printf("input:");
    scanf("%[^\n]s",s);
   printf("find:");
   scanf(" %c",&a);
    last(s,a);
    printf("output:position:%d",last(s,a));
}