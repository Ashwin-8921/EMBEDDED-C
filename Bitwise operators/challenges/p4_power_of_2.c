/*Determine whether a given integer is a power of two using efficient bitwise operations.*/



#include<stdio.h>

void power(int i)
{
    if(i&(i-1))
    printf("it is not power of 2");
    else
    printf("it is power of 2");

}

int main()
{
    int i;
    printf("Input integer: ");
    scanf("%d", &i);
    power(i);
}