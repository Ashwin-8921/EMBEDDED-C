/*Given a list of strings and a word, print the strings containing all characters of that word.
Input: Word = "act", List = ["cat", "tac", "act", "dog"]
Output: "cat", "tac", "act"*/
#include<stdio.h>

int fun(char a[],char b[])
{
    int i,j,q;
    for(i=0;b[i];i++)
    {
        q=0;
        for(j=0;a[j];j++)
        {
            if(a[j] == b[i])
            {
                q=1;
                break;
            }
        }
        if(!q)
        return 0;
    }
    return 1;
}

int main()
{
   char s[5][100] = {"chennai","henry","bengaluru","elephant","pen"};
   char w[20];
   printf("Enter word:\n");
   scanf("%s",w);
   
   for(int i=0;i<5;i++)
   {
    if(fun(s[i],w))
    printf("%s ",s[i]);
   }
   printf("\n");
}