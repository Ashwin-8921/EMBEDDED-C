/*How would you safely read a large file line-by-line in C, ensuring you never overflow your buffer, 
even if a line is extremely long? Describe your approach and key functions you’d use.*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char filename[100];
    printf("Enter file name: ");
    if (scanf("%99s", filename) != 1) 
    {
        printf("Failed to read file name.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (!fp) 
    {
        perror("Failed to open file");
        return 1;
    }

    size_t bufsize = 128;
    char *buffer = malloc(bufsize);
    if (!buffer) 
    {
        printf("Memory allocation failed.\n");
        fclose(fp);
        return 1;
    }

    size_t pos = 0;
    int c;

    while ((c = fgetc(fp)) != EOF) 
    {
        if (pos + 1 >= bufsize) 
        {
            bufsize *= 2;
            char *temp = realloc(buffer, bufsize);
            if (!temp) 
            {
                printf("Memory reallocation failed.\n");
                free(buffer);
                fclose(fp);
                return 1;
            }
            buffer = temp;
        }

        buffer[pos++] = (char)c;

        if (c == '\n') 
        {
            buffer[pos] = '\0';
            printf("Line: %s", buffer);
            pos = 0;
        }
    }

    if (pos > 0) 
    {
        buffer[pos] = '\0';
        printf("Line: %s\n", buffer);
    }

    free(buffer);
    fclose(fp);
    return 0;
}
