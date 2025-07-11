//Given an integer array, use pointer arithmetic to reverse it in place 
//without using any index or size variables — just two pointers.
#include<stdio.h>
void rev(int*p,int*q,int n)
{
    int i,temp;
    for(i=1;i<n;i++)
    q++;
    for(;p<q;p++,q--)
    {
        temp=(*p);
        (*p)=(*q);
        (*q)=temp;
    }
}

int main()
{
    int a[4]={1,2,3,4},i;
    int *p=a,*q=a;
    printf("Before Reversing:\n");
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
    printf("\n");
    rev(p,q,4);
    printf("After Reversing:\n");
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
}