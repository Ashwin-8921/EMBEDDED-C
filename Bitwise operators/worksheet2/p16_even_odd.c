/*16. Check whether a number is even or odd using bitwise operator
Question: Write a C program to check whether a number is even or odd using bitwise AND operator.
Sample data: Input: 7
Expected output: 7 is odd*/


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