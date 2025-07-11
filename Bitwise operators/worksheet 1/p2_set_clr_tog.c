/*Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer:
Set the LSB to 1
Clear the LSB (set to 0)
Toggle the LSB
Set the MSB to 1
Clear the MSB (set to 0)
Toggle the MSB
Set a specific bit to 1
Clear a specific bit
Toggle a specific bit*/


#include<stdio.h>
void print(int *i)
{
    printf("binary: ");
    for(int pos=31;pos>=0;pos--)
    {
        printf("%d",*i>>pos&1);
    }
    printf("\n");
}

void clearlsb(int *i)
{
    *i=*i&~(1<<0);
    print(i);
}

void togglelsb(int *i)
{
    *i=*i^(1<<0);
     print(i);
}

void setmsb(int *i)
{
    *i=*i|(1<<31);
    print(i);
}
void clearmsb(int *i)
{
    *i=*i&~(1<<31);
    print(i);
}
void togglemsb(int *i)
{
    *i=*i^(1<<31);
     print(i);
}

void setpos(int *i,int pos)
{
    *i=*i|(1<<pos);
    print(i);
}

void clearpos(int *i,int pos)
{
    *i=*i&~(1<<pos);
    print(i);
}
void togglepos(int *i,int pos)
{
    *i=*i^(1<<pos);
     print(i);
}

int main()
{
    int i,pos;
    printf("input:");
    scanf("%d",&i);
    print(&i);
    clearlsb(&i);
    togglelsb(&i);
    setmsb(&i);
    clearmsb(&i);
    togglemsb(&i);
    printf("enter pos to set:");
    scanf("%d",&pos);
    setpos(&i,pos);
    printf("enter pos to clear:");
    scanf(" %d",&pos);
    clearpos(&i,pos);
     printf("enter pos to toggle:");
    scanf(" %d",&pos);
    togglepos(&i,pos);


}