/*8. Get lowest set bit of a number
 Question: Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)*/

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
void lowest(int i)
{
    for(int pos=0;pos<=31;pos++) 
    {
         if((i>>pos)&1)
         {
            printf("lowest set bit of %d is at position : %d",i,pos);
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
    lowest(i);
}