/*15. Swap two numbers using bitwise operator 
Question: Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5*/

#include<stdio.h>

void swap(int *i,int *j)
{
    *i=*i^*j;
    *j=*j^*i;
    *i=*i^*j;
}

int main()
{
    int i,j;
    printf("input 2 num:");
    scanf("%d%d",&i,&j);
    printf("before swap: i=%d j=%d\n",i,j);
    swap(&i,&j);
    printf("after swap: i=%d j=%d",i,j);
}