/*Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards.
Input: "madam"
Output: Palindrome*/

#include<stdio.h>
#include<string.h>

void main()
{
 char str[50];
    int i, len;

    printf("input : ");
    scanf("%s", str);
    len=strlen(str)-1;

    for(i=0;i<len;i++,len--)
    {
        if(str[i]!=str[len])
        break;
    }
    if(i==len)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

}