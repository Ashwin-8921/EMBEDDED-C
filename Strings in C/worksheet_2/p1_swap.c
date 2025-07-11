/*Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello"*/



#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    printf("input:str1= ");
    scanf("%s", str1);
    printf("str2= : ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);


if(len1==len2)
{
    for (int i = 0; i < len1; i++)
    {
        str1[i] ^= str2[i];
        str2[i] ^= str1[i];
        str1[i] ^= str2[i];
    }
}

    printf("output: str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

}
