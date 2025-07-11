/*Write a program to check bit status in an integer:
Check if LSB is set (1) or not (0)
Check if MSB is set (1) or not (0)
Check if the nth bit is set (1) or not (0) (user input)*/

#include<stdio.h>
void lsb(int i)
{
    if((i>>0)&1)
    printf("lsb set\n");
    else
    printf("lsb not set\n");
}
void msb(int i)
{
    if((i>>31)&1)
    printf("msb set\n");
    else
    printf("msb not set\n");
}
void nthbit(int i,int pos)
{
    if((i>>pos)&1)
    printf("%d position bit set\n",pos);
    else
    printf("%d position bit not set\n",pos);
}


int main()
{
    int i,k;
    printf("enter input:");
    scanf("%d",&i);
    lsb(i);
    msb(i);
    printf("enter pos:");
    scanf("%d",&k);
    nthbit(i,k);
}