/*Write a C program to check whether a number is a power of 2 using bitwise operations.*/

#include<stdio.h>

void power(int i)
{
    int pos,c;
    for(pos=0,c=0;pos<=31;pos++)
    {
        if((i>>pos)&1)
        c++;
    }
    if(c==1)
    printf("%d is power of 2",i);
    else
      printf("%d is not power of 2",i);
}

int main()
{
    int i, n;
    printf("Input integer: ");
    scanf("%d", &i);
    power(i);
}