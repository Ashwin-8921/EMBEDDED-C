/*9. Count trailing zeros in a binary number 
Question: Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3*/

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
void trailing(int i)
{
    for(int pos=0;pos<=31;pos++) 
    {
         if((i>>pos)&1)
         {
            printf("number of trailing zeroes: %d",pos);
            break;
         }
    }
}
int main()
{
    int i,n;
    printf("input:");
    scanf("%d",&i);
    print(i);
    trailing(i);
}