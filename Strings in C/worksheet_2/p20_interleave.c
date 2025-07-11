/*20.Print all possible interleavings of two strings, preserving the relative order of characters in each string.
Input: str1 = "AB", str2 = "CD"
Output: "ABCD", "ACBD", "ACDB", "CABD", "CADB", "CDAB"*/

#include<stdio.h>
#include<string.h>

void interleave(char res[],char s[],char p[],int i,int j,int k)
{

       if (s[i] == '\0' && p[j] == '\0') 
       {
        res[k] = '\0'; 
        printf("%s\n", res);
        return;
        }

    
    if (s[i] != '\0') 
    {
        res[k] = s[i];
        interleave(res, s, p, i + 1, j, k + 1);
    }
    if (p[j] != '\0') 
    {
        res[k] = p[j];
        interleave(res, s, p, i, j + 1, k + 1);
    }

}


int main()
{
    char s[20],p[20];

    printf("input: str1=");
    scanf("%s",s);
    printf("str2 =");
    scanf(" %s",p);
    int len=strlen(s)+strlen(p);
    char res[len+1];
    interleave(res,s,p,0,0,0);
}