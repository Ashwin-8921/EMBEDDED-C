/* Find first occurrence of a character in a given string
       Input: "elephant", find 'e'
 
        Output: Position: 0
*/

#include<stdio.h>
#include<string.h>

int pos(char s[],char a)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==a)
        {
            return i;
        }
    }

}


void main()
{
    char s[20];
    char c;
    printf("input:");
    scanf("%[^\n]",s);
    printf("find:");
    scanf(" %c",&c);
    printf("position: %d\n",pos(s,c));
}