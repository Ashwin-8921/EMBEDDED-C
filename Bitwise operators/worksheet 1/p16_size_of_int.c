/*Write a program to determine the size (in bits) of an integer using bit shifts.*/



#include <stdio.h>

void intSizeBits()
{
    unsigned int x = 1;
    int count = 0;

    while (x != 0) 
    {
        x = x << 1;
        count++;
    }

    printf("Size of int in bits: %d\n", count);
}

int main() {
    intSizeBits();
    return 0;
}
