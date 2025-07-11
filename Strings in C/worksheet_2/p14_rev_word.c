/*Reverse the order of words in a sentence without reversing the words themselves.
Input: "Hello world"
Output: "world Hello"*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],temp;
    printf("Enter the String:\n");
    scanf("%[^\n]",s);
    strrev(s);
    int i,j,k;
    for(i=0;s[i];i=k)
    {
        for(j=i;(s[j]!=' ')&&(s[j]!='\0');j++);
        for(k=j;s[k]==' ';k++);
        for(j=j-1;i<j;i++,j--)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
    printf("%s\n",s);
}