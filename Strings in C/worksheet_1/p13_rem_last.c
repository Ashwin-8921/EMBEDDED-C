/*Remove last occurrence of a character from string
          Input: "mississippi", remove 's'

          Output: "missipippi
*/
#include<stdio.h>
#include<string.h>

void rmlast(char s[],char a)
{
    int i=strlen(s)-1,j;
    for(;i>=0;i--)
    {
        if(s[i]==a)
        {
            for(j=i;s[j];j++)
            {
                s[j]=s[j+1];
            }
            break;
        }
    }
}
void main()
{
    char s[20];
    char a;
    printf("input:");
    scanf("%[^\n]s",s);
   printf("remove:");
   scanf(" %c",&a);
    rmlast(s,a);
    printf("output:%s",s);
}