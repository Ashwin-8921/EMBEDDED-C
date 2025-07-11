 /*Remove all extra blank spaces from a given string
         Input: " This is ChatGPT "
 
         Output: "This is ChatGPT"
*/
#include<stdio.h>
#include<string.h>
void space(char s[])
{
   int i,j,len=strlen(s);
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

for(i=0;s[i];i++)
{
    if(s[i]==' '&& s[i+1]==' ')
    {
        for(j=i;s[j];j++)
        {
            s[j]=s[j+1];
        }
        i--;
    }
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
}