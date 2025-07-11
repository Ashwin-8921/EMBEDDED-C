/*Find first occurrence of a word in a given string
         Input: "this is a test string", word: "test"

         Output: Found at position 11
*/

#include<stdio.h>
#include<string.h>

int occurence (char s[],char a[])
{
    int i,j,k;
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
            return i+1;
        }
    }
}


void main()
{
    char s[50];
    char a[10];
    printf("input:");
    scanf("%[^\n]",s);
    printf("word:");
    scanf("%s",a);

   printf("output found at:%d",occurence(s,a));
    
}


    