//Find lowest frequency character in a string
//        Input: "engineering"
//       Output: 'g', 'r', 'n' each appear once


#include<stdio.h>
#include<string.h>

void freq(char s[])
{
    int i,j,c,k;
    int a[26]={0};
    for(i=0;s[i];i++)
    {
         //if(a[s[i]-96]==0)
        
        for(j=i;s[j];j++)
        {
        
            if(s[i]==s[j] )
            {
                a[s[i]-96]++;
            }
        }
   // }
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==1)
        printf("%c=%d times\n",i+96,a[i]);
    }

}

void main()
{
    char s[20];
    printf("input:");
    scanf("%s",s);
    freq(s);
}