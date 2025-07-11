/*Count occurrences of a word in a given string
          Input: "hi hello hi hey hi", word: "hi"
         Output: 3
*/

#include<stdio.h>

void occur(char s[],char a[])
{

        int i,j,k,c;
    for(i=0,c=0;s[i];i++)
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
               c++;
            }
            }
            
        }
        printf("output=%d",c);
}

void main()
{
    char s[50];
    char a[10];
    printf("input:");
    scanf("%[^\n]",s);
    printf("word:");
    scanf("%s",a);
    occur(s,a);
}


    