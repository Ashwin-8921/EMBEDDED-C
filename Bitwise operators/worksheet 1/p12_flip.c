/*Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.*/

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

void flip(int i,int n)
{
    int k,c,res=i^n;
    for(k=0,c=0;k<=31;k++)
    {
        if((res>>k)&1)
        c++;
    }
    printf("no of bits need to be flipped:%d",c);
}

int main() 
{
    int i, n;
    printf("Input  2 integer: ");
    scanf("%d%d", &i,&n);
    print(i);
    print(n);
    flip(i,n);
}