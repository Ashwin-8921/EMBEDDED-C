/*14. Convert decimal to binary using bitwise operator 
Question: Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101*/

#include<stdio.h>

void print(int i) 
{
    printf("binary: ");
    for(int pos=7;pos>=0;pos--) 
    {
        printf("%d", i>>pos&1);
    }
    printf("\n");
}

int main()
{
    unsigned char i;
    printf("input:");
    scanf("%d",&i);
    print(i);
  
}
