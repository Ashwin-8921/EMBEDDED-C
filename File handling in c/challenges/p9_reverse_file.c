/*Write a program that reverses the content of a large file in place 
(without using extra files or enough RAM to load the whole file). Hint: Consider using file seek operations.*/


#include <stdio.h>

void reverse_file(const char *filename) 
{
    FILE *fp = fopen(filename, "r+");
    if (fp == NULL) 
    {
        printf("Failed to open file.\n");
        return;
    }

    fseek(fp, 0, SEEK_END);
    long end = ftell(fp) - 1;
    long start = 0;

    while (start < end) 
    {
        fseek(fp, start, SEEK_SET);
        int ch1 = fgetc(fp);

        fseek(fp, end, SEEK_SET);
        int ch2 = fgetc(fp);

        fseek(fp, start, SEEK_SET);
        fputc(ch2, fp);

        fseek(fp, end, SEEK_SET);
        fputc(ch1, fp);

        start++;
        end--;
    }

    fclose(fp);
}

int main() 
{
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    reverse_file(filename);

    printf("File reversed in-place.\n");
    return 0;
}
