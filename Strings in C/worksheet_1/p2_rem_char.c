//Remove all repeated characters from a given string
//Input: "programming"
 //Output: "progamin"


 #include<stdio.h>
 #include<string.h>

 void rem(char s[])
 {
    int i,j,k,len=strlen(s);
    for(i=0;i<len;i++)
    {
        for(j=i+1;s[j];)
        {
            if(s[i]==s[j])
            {
                for(k=j;s[k];k++)
                {
                    s[k]=s[k+1];
                }
                len--;
            
            }
            else
            {
                j++;
            }
        }
    }
    return;
 }

 int main()
 {
    char s[20];
    printf("input:");
    scanf("%[^\n]s",s);
    rem(s);
   printf("output:%s",s);
 }