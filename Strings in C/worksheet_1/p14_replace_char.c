/*Replace first occurrence of a character with another in a string
         Input: "google", replace 'o' with 'a'

         Output: "gagole"
*/

#include<stdio.h>

void occ(char s[],char a,char b)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==a)
        {
            s[i]=b;
            break;
        }
    }

}

int main()
{
    char s[20];
    char a,b;
    printf("input: ");
    scanf("%[^\n]",s);
    printf("replace: ");
    scanf(" %c",&a);
    printf("with: ");
    scanf(" %c",&b);
    occ(s,a,b);
    printf("%s",s);


}