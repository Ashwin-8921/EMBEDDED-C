/*2. Check Most Significant Bit (MSB) of a number is set or not
Question: Write a C program to check if the Most Significant Bit (MSB) of a number is set (1) or not.
Sample data: Input: 128 (binary 10000000 for 8-bit number)
Expected output: MSB of 128 is set (1)

*/

#include<stdio.h>
void print(int i) 
{
    printf("binary: ");
    for(int pos=31;pos>=0;pos--) 
    {
        printf("%d", i>>pos&1);
    }
    printf("\n");
}

void msb(int i)
{
    if((i>>31)&1)
    {
        printf("output:MSB of %d is set\n",i);
    }
    else
    
        printf("output:MSB of %d is not set\n",i);
}

int main()
{
    int i;
    printf("input:");
    scanf("%d",&i);
    print(i);
    msb(i);
}