/*Implement naive pattern searching to find all occurrences of a pattern in a text.
Input: Text = "hello world", Pattern = "lo"
Output: Pattern found at index 3*/
#include<stdio.h>
#include<string.h>


int main()
{

    char a[50],p[20];
    printf("input : text=");
    scanf("%[^\n]",a);

printf("pattern:");
 scanf(" %[^\n]",p);
char *i=strstr(a,p);
if(i!=NULL)
{
printf("index=%d",i-a);
}
else
printf("sub string not present\n");
}