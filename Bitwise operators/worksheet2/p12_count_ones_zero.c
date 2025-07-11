/*12. Count total zeros and ones in a binary number
Question: Write a C program to count the total number of zeros and ones in the binary representation of a number.
Sample data: Input: 15 (binary 00001111)
Expected output: Number of ones: 4, Number of zeros: 4 (assuming 8-bit)

*/

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

void count(unsigned char i)
{
    int one=0,zero=0;
    for(int pos=7;pos>=0;pos--) 
    {
        if((i>>pos)&1)
        one++;
        else
        zero++;
    }
    printf("Number of ones: %d, Number of zeros: %d",one,zero);
}
int main()
{
    unsigned char i;
    printf("input:");
    scanf("%d",&i);
    print(i);
    count(i);
  
}
