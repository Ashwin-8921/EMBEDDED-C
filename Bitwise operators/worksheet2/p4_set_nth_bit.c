/*4. Set nth bit of a number 
Question: Write a C program to set (make 1) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after setting bit 1: 10 (binary 1010) — no change
Input number: 8 (binary 1000), bit position: 0
Expected output: Number after setting bit 0: 9 (binary 1001)*/

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

int setnthbit(int i,int n)
{
    i=i|(1<<n);
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
    i=setnthbit(i,n);
    print(i);
    printf("%d",i);
}