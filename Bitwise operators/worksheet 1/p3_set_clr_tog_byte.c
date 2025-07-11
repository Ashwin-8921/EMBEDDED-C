/*Write a program to modify specific portions of a given integer:
Set all bits in the Least Significant Byte (LSB) to 1
Set all bits in the Most Significant Byte (MSB) to 1
Set all bits in the Least Significant Nibble to 1
Set all bits in the Most Significant Nibble to 1
Set n bits to 1 (user input)
Clear n bits (set to 0), with n as input
Toggle n bits (user input)*/

#include <stdio.h>

void print(int i) 
{
    printf("binary: ");
    for(int pos=31;pos>=0;pos--) 
    {
        printf("%d", i>>pos&1);
    }
    printf("\n");
}

void setlsb(int i) 
{
    i=i|0xFF;
    print(i);
}

void setmsb(int i) 
{
    i=i|0xFF000000;
    print(i);
}

void setleastnib(int i) 
{
    i=i|0x0F;
    print(i);
}

void setmostnib(int i) 
{
    i=i|0xF0000000;
    print(i);
}

void setnbits(int i, int n) 
{
    for(int pos=n-1;pos>=0;pos--) 
    {
        i=i|(1<<pos);
    }
    print(i);
}

void clearnbits(int i, int n) 
{
    for(int pos=n-1;pos>=0;pos--) 
    {
        i=i&~(1<<pos);
    }
    print(i);
}

void togglenbits(int i, int n) 
{
    for(int pos=n-1;pos>=0;pos--) 
    {
        i=i^(1<<pos);
    }
    print(i);
}

int main() {
    int i, n;
    printf("Input integer: ");
    scanf("%d", &i);
    print(i);

    setlsb(i);
    setmsb(i);
    setleastnib(i);
    setmostnib(i);

    printf("Enter number of bits to set: ");
    scanf("%d", &n);
    setnbits(i, n);

    printf("Enter number of bits to clear: ");
    scanf("%d", &n);
    clearnbits(i, n);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);
    togglenbits(i, n);


}
