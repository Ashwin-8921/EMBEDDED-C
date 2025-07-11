/*Structure Pointers and Memory Access
Goal
Understand the use of pointers to structures for efficient memory access and how to use the arrow operator for member access.

Activity
Declare a pointer to a structure and allocate memory using malloc().
Use arrow operator to assign and print structure member values.
Simulate memory-mapped peripheral access using structure pointers.
Illustrate how structure pointers simplify code in register programming.
Tip: Always initialize structure pointers and check for NULL before dereferencing.*/
#include<stdio.h>
struct st{
int x;
char c;
};
int main()
{
struct st v;
struct st*p=&v;
printf("Enter the elements\n");
scanf("%d %c",&p->x,&p->c);
printf("The data received is:%d %c\n",p->x,p->c);

}
