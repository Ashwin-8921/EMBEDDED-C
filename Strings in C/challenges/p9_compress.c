/*9. Implement Run-Length Encoding (RLE) for string compression
Compress a string by replacing consecutive repeated characters with the character followed by the count.

Example: Input: "aaabbc"
Output: "a3b2c1"*/



#include <stdio.h>
#include <string.h>

void compress(char str[]) {
    int len = strlen(str);
    printf("output:");
    for (int i = 0; i < len; ) 
    {
        int count = 1;
        for (int j = i + 1; j < len; j++) 
        {
            if (str[i] == str[j])
                count++;
            else
                break;
        }
        printf("%c%d", str[i], count);
        i += count;
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("input: ");
    scanf("%s", str);
    compress(str);
    return 0;
}
