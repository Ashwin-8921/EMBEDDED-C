/*Check whether a string is palindrome or not
        Input: "madam"
       Output: "Palindrome"
*/

#include<stdio.h>
#include<string.h>

void palindrome(char s[])
{
int i,j=strlen(s)-1;
for(i=0;i<j;i++,j--)
{
    if(s[i]!=s[j])
    break;
}
if(i==j)
{
    printf("palindrome\n");
}
else
printf("not palindrome\n");
}

int main()
{
    char s[50];
    printf("input:");
    scanf("%[^\n]",s);
    palindrome(s);
}