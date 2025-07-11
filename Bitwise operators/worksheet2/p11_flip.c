/*11. Flip bits of a binary number using bitwise operator
Question: Write a C program to flip all bits of a number using bitwise operators.
Sample data: Input: 5 (binary 00000101)
Expected output: Flipped bits: 250 (binary 11111010) (assuming 8-bit)*/

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

unsigned char flip(unsigned char i)
{
    for(int n=0;n<=7;n++)
    {
    i=i^(1<<n);
    }
      return i;
}
int main()
{
    unsigned char i;
    printf("input:");
    scanf("%d",&i);
    print(i);
    i=flip(i);
    print(i);
    printf("%d",i);
}