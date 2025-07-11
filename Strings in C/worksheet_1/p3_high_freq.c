// Find highest frequency character in a string
 //         Input: "engineering"
 
 //         Output: 'e' appears 3 times

 #include<stdio.h>
 #include<string.h>
void freq(char s[])
{
    int i,j,c,k=0;
    char t=s[0];
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1,c=1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {

                c++;
                if(k<c)
                t=s[j];

            }
        }
        if(k<c)
        k=c;
    }
    printf("Output: '%c' appears %d times",t,k);
}
 int main()
 {
    char s[20];
    printf("input:");
    scanf("%s",s);
    freq(s);
 }