/*Write a C program to count the number of set bits in an unsigned integer.*/


#include<stdio.h>

void countBits(unsigned int n) 
{
    int c=0;
    for(int i=0;i<=31;i++) 
    {
        if((n>>i)&1)
        c++;
    }
    printf("Set bits: %d\n", c);
}

int main() {
    unsigned int n;
    printf("Enter number: ");
    scanf("%d",&n);
    countBits(n);
    
}
