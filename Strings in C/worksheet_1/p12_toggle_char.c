/*Toggle case of each character of a string
         Input: "HeLLo"
 
         Output: "hEllO"
*/


#include<stdio.h>

void toggle(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]!=' ')
        {
            s[i]^=32;
        }
    }
}

void main()
{
    char s[20];
    printf("input:");
    scanf("%[^\n]",s);
    toggle(s);
    printf("%s",s);
}