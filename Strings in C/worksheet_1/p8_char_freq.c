/* Program: Count frequency of each character in a string
        Input: "success"
         Output:
          s = 3
         u = 1
         c = 2
         e = 1
*/

#include<stdio.h>
#include<string.h>

void charfreq(char s[])
{
    char p[20];
    strcpy(p,s);
    int i,j,k,c,len=strlen(p);
    for(i=0;i<len;i++)
    {
        for(j=i+1,c=1;p[j];)
        {
            if(p[i]==p[j])
            {
                c++;
                for(k=j;p[k];k++)
                {
                    p[k]=p[k+1];
            
                }
                len--;
            }
            else{
                j++;
            }
        }
        printf("%c=%d times\n",p[i],c);
    }
}

int main()
{
    char s[20];
    printf("input:");
    scanf("%s",s);
    charfreq(s);
}