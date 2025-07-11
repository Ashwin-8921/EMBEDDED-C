/*Write macros to set, clear, and toggle the nth bit using bitwise operators.*/

#define SET_BIT(num, n)    (num | (1 << n))
#define CLEAR_BIT(num, n)  (num & ~(1 << n))
#define TOGGLE_BIT(num, n) (num ^ (1 << n))

#include<stdio.h>


void print(int i) 
{
    printf("binary: ");
    for(int pos=31;pos>=0;pos--)
    {
        printf("%d", i>>pos&1);
    }
    printf("\n");
}
void main()
{
    int i;
    printf("enter num:");
    scanf("%d",&i);
    print(i);
    i=SET_BIT(i,5);
    print(i);
    i=CLEAR_BIT(i,5);
    print(i);
    i=TOGGLE_BIT(i,5);
    print(i);


}
