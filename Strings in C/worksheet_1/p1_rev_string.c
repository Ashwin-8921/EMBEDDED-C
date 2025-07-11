/*1. Program: Reverse order of words in a given string
          Input: "hello world from C"
 
         Output: "C from world hello"*/

#include<stdio.h>
#include<string.h>

void rev(char s[])
{
    int i,j=strlen(s)-1;
    char t;
    for(i=0;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }

}



int main()
{
    char s[20];
    printf("input:");
    scanf("%[^\n]s",s);
    rev(s);
    printf("%s",s);
}