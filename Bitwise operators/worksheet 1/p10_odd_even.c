/*Write a C program to determine whether a number is odd or even using bitwise operators.*/
#include<stdio.h>

void odd_even(int i)
{
    if(i&1)
    printf("%d is odd",i);
    else
      printf("%d is even",i);
}

int main()
{
    int i;
    printf("input: ");
    scanf("%d", &i);
    odd_even(i);
}