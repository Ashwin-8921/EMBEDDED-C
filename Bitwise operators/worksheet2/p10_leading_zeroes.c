/*10. Count leading zeros in a binary number 
Question: Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer).
Sample data: Input: 16 (binary 00000000000000000000000000010000)
Expected output: Number of leading zeros: 27*/

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
void leading(int i)
{
    int c=0;
    for(int pos=31;pos>=0;pos--) 
    {
         if((i>>pos)&1)
         {
            break;
         }
         c++;
    }
    printf("number of leading zeroes: %d",c);
        
}
int main()
{
    int i,n;
    printf("input:");
    scanf("%d",&i);
    print(i);
    leading(i);
}