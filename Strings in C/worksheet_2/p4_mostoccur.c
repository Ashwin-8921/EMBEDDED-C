/*Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    int maxCount = 0;
    char ch;

    for (int i = 0; str[i]; i++) 
    {
        int count = 0;
        for (int j = 0; str[j] ; j++) 
        {
            if (str[i] == str[j]) 
            {
                count++;
            }
        }
        if (count > maxCount) 
        {
            maxCount = count;
            ch = str[i];
        }
    }

    printf("Most frequent character: '%c'\n", ch);

    return 0;
}
