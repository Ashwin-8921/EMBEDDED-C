/*6. Toggle nth bit of a number 
Question: Write a C program to toggle (flip) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after toggling bit 1: 8 (binary 1000)*/

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

int togglenthbit(int i,int n)
{
    i=i^(1<<n);
    return i;
}

int main()
{
    int i,n;
    printf("input:");
    scanf("%d",&i);
    print(i);
    printf("bit position:");
    scanf("%d",&n);
    i=togglenthbit(i,n);
    print(i);
    printf("%d",i);
}