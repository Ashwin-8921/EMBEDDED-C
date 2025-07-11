/*13. Rotate bits of a given number 
Question: Write a C program to rotate bits of a number to the left or right by a given number of positions.
Sample data: Input: number=16 (binary 00010000), rotate left by 2
Expected output: Result after rotation: 64 (binary 01000000)*/

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

 unsigned char rotate(unsigned char i,int n)
{
    i=i<<n;
    return i;
}

int main()
{
    unsigned char i;
    int n;
    printf("input number:");
    scanf("%d",&i);
    printf("rotate by:");
    scanf(" %d",&n);
    print(i);
   i=rotate(i,n);
  print(i);
}
