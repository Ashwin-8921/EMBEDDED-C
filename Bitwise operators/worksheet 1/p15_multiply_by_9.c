/*Write a program to multiply a number by 9 using bitwise shift operations.*/


#include <stdio.h>

void multiply(int n) {
    int res = (n << 3) + n;
    printf("%d * 9 = %d\n", n, res);
}

int main() 
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    multiply(x);
    
}
