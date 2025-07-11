/*Find the first non-repeating character in a string and print it.
Input: "swiss"
Output: 'w'*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter the string:\n");
    scanf("%s",s);
    int i,j,c=0;
    for(i=0;s[i];i++)
    {
        c=1;
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            break;
        }

        if(i==j)
        {
            for(j=i+1;s[j];j++)
            {
                if(s[i]==s[j])
                c++;
            }
            if(c == 1)
            {
             printf("'%c'",s[i]);
             return 0;
            }
        }
    }
}