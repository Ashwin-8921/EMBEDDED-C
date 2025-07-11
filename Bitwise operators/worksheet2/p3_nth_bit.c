/*3. Get nth bit of a number
Question: Write a C program to get the value of the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 2
Expected output: Bit 2 of 10 is 1

*/

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

void nthbit(int i,int n)
{
    printf("bit %d of %d is %d",n,i,((i>>n)&1));
}

int main()
{
    int i,n;
    printf("input:");
    scanf("%d",&i);
    print(i);
    printf("bit position:");
    scanf("%d",&n);
    nthbit(i,n);
}