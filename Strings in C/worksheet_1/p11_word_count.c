/*Program: Count total number of words in a string
          Input: "C programming is fun"

          Output: 4
*/

#include<stdio.h>
#include<string.h>

int wordcount(char s[])
{
    int i,j,c=0;
    for(i=0;s[i];i++)
    {
        if(s[i]!=' ')
        {
            for(j=i;s[j];j++)
            {
                 if(s[j]==' '||s[j+1]=='\0')
                 {
                 c++;
                 i=j;
                 break;
                 }
            }
         }
    }
    return c;
}

void main()
{
    char s[50];
    printf("input:");
    scanf("%[^\n]",s);
  printf("output:%d",wordcount(s));
}