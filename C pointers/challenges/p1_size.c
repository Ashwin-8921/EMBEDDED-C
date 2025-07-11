/*How can you find the size of a data type without using the sizeof operator, using pointer arithmetic?*/



#include<stdio.h>

int main()
{
    int *p1=NULL;
    int *p2=p1+1;
    int size=(char *)p2-(char *)p1;
    printf("%d\n",size);
}
