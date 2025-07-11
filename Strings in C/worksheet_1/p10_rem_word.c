/*Program: Remove all occurrence of a word in given string
           Input: "hello world hello universe", remove: "hello"

          Output: "world universe"
*/

#include<stdio.h>
#include<string.h>

void removes(char s[],char a[])
{
        int i,j,k,m,n;
    for(i=0;s[i];i++)
    {
        if(s[i]==a[0])
        {
            for(j=0,k=i;a[j];j++,k++)
            {
                if(a[j]!=s[k])
                {
                    break;
                }
            }
            if(s[k]==' '|| s[k]=='\0')
            {
               for(n=0;n<strlen(a);n++)
               {
                for(m=i;m<strlen(s);m++)
                {
                    s[m]=s[m+1];
                }
            }
            }
            
        }
    }
}


int main()
{
    char s[50];
    char a[10];
    printf("input:");
    scanf("%[^\n]",s);
    printf("remove:");
    scanf("%s",a);
    removes(s,a);
    printf("output:%s",s);
}