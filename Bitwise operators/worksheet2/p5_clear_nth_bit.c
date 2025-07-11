/*5. Clear nth bit of a number
Question: Write a C program to clear (make 0) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 3
Expected output: Number after clearing bit 3: 2 (binary 0010)*/

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

int clearnthbit(int i,int n)
{
    i=i&~(1<<n);
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
    i=clearnthbit(i,n);
    print(i);
    printf("%d",i);
}