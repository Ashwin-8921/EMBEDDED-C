/*1. Check Least Significant Bit (LSB) of a number is set or not 
Question: Write a C program to check if the Least Significant Bit (LSB) of a number is set (1) or not.
Sample data: Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)*/

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

void lsb(int i)
{
    if(i&1)
    {
        printf("output:LSB of %d is set\n",i);
    }
    else
    
        printf("output:LSB of %d is not set\n",i);
}

int main()
{
    int i;
    printf("input:");
    scanf("%d",&i);
    print(i);
    lsb(i);
}