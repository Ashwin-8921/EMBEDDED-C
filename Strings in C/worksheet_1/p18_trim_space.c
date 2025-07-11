/*Trim both leading and trailing white space characters from given string
        Input: " Hello World "
 
        Output: "Hello World"
*/

#include<stdio.h>
#include<string.h>

void space(char s[])
{
    int i,len=strlen(s);
    if(s[0]==' ')
    {
        for(i=0;s[i];i++)
        {
            s[i]=s[i+1];
        }
        len--;
    }

     if(s[len-1]==' ')
     {
        s[len-1]='\0';
     }
}

int main()
{
    char s[20];
    printf("input:");
    scanf("%[^\n]",s);
    printf("len=%d\n",strlen(s));
    space(s);
    printf("output:%s",s);
    printf("len=%d",strlen(s));
}