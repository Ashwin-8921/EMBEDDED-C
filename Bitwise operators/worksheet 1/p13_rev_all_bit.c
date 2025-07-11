/*Write a program to reverse all bits in an integer.*/
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

int reverse(int num)
{
    int p,k;
    for(k=0,p=31;k<p;k++,p--)
    {
        if(((num>>p)&1)!=((num>>k)&1))
        {
            num=num^(1<<p);
            num=num^(1<<k);
        }
    }
    return num;
}

int main()
{
    int i, n;
    printf("Input integer: ");
    scanf("%d", &i);
    print(i);
    i=reverse(i);
    print(i);
}