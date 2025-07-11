// Understand that arr[i] and *(arr + i) give the same result.
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4},i;

    for(i=0;i<4;i++)
    printf("%d %d\n",a[i],*(a+i));
}