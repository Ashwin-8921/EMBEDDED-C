/*19.Find the length of the longest substring with no repeating characters.
Input: "abcabcbb"
Output: 3*/

#include<stdio.h>
#include<string.h>

int longsub(char s[])
{
    int i,j,start,len,maxlen=0;
    start=0;
    for(i=0;s[i];i++)
    {
        for(j=start;j<i;j++)
        {
            if(s[i]==s[j])
            {
                start=j+1;
                break;
            }
        }
        len=i-start+1;
        if(len>maxlen)
        {
            maxlen=len;
        }
    }
    return maxlen;
}


int main()
{
    char s[20];
    printf("input:");
    scanf("%s",s);
   printf("output: %d",longsub(s));
}