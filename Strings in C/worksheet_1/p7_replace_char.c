//Replace all occurrences of a character with another in a string
//      Input: "banana", replace 'a' with 'o'

//        Output: "bonono"

#include<stdio.h>
#include<string.h>

void replace(char s[],char a,char b)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==a)
        {
            s[i]=b;
        }
    }

}

void main()
{
    char a,b,s[20];
    printf("input:");
    scanf("%s",s);
    printf("replace ");
    scanf(" %c",&a);
    printf("with ");
    scanf(" %c",&b);
    replace(s,a,b);
    printf("%s",s);
}