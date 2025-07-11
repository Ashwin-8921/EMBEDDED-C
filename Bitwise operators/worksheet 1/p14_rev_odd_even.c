/*Write a program to reverse:
Bits at odd positions
Bits at even positions*/
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

int odd_reverse(int num)
{
    int p,k;
    for(k=1,p=31;k<p;k=k+2,p=p-2)
    {
        if(((num>>p)&1)!=((num>>k)&1))
        {
            num=num^(1<<p);
            num=num^(1<<k);
        }
    }
    return num;
}
int even_reverse(int num)
{
    int p,k;
    for(k=0,p=30;k<p;k=k+2,p=p-2)
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
    n=odd_reverse(i);
    printf("odd reverse:\n");
    print(n);
    printf("even reverse:\n");
       n=even_reverse(i);
        print(n);
}