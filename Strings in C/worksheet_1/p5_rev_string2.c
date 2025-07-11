// Reverse a string without using library functions
//        Input: "OpenAI"

//         Output: "IAnepO"

#include<stdio.h>

void rev(char s[])
{
    int i,j;
    char t;
    for(j=0;s[j];j++);
    j--;
    for(i=0;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}


void main()
{
    char s[20];
    printf("input:");
    scanf("%[^\n]",s);
    rev(s);
    printf("output:%s",s);
}