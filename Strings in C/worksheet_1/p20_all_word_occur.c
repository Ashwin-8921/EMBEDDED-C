/*Find all occurrences of a word in given string
        Input: "the sky is the limit in the sky", search "the"
       Output: Found at positions: 0, 15, 30
*/

#include<stdio.h>
#include<string.h>


void occur(char s[],char a[])
{
  printf("found at positions:");
    int i,j,k,c=0;
    int len=strlen(a);

    for(i=0;s[i];i++)
    {
        if(s[i]==a[0])
        {
            for(j=0,c=0,k=i;a[j];j++,k++)
            { 
                c++;
                if(a[j]!=s[k])
                {
                    break;
                }
            }
            if((s[k]==' '|| s[k]=='\0')&&(c==len))
            {
               printf("%d, ",i);
            }
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
    occur(s,a);
}


    