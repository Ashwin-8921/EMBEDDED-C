/*Compress a string using run-length encoding by replacing repeated characters with the character and count.
Input: "aaabbcc"
Output: "a3b2c2"*/
#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%s",s);
    int i=0,j=0,c=0;
    for(;s[i];i++)
    {
        c=1;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        break;
        if(i == j)
        {
            for(j=i;s[i]==s[j+1];j++)
            c++;
            printf("%c%d",s[i],c);
        }
    }
}