/*Print all permutations of a given string. All possible arrangements of characters should be printed.
Input: "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"*/
#include<stdio.h>
#include<string.h>

void swp(char* a,char* b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permut(char* s,int k,int l)
{
    if(k == l)
    {
        printf("%s\n",s);
    }
    else
    {
        for(int i=k;i<=l;i++)
        {
            swp(&s[k],&s[i]);
            permut(s,k+1,l);
            swp(&s[k],&s[i]);
        }
    }
}

int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%s",s);
    int l = strlen(s);

    permut(s,0,l-1);

}