//Learn to modify values in an array using pointer operations.
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4},i;
    int* p=a;
    printf("Before modifying:\n");
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
    printf("\n");

    for(i=0;i<4;i++,p++)
    (*p)=(*p)+i;

    printf("After modifying:\n");
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
}