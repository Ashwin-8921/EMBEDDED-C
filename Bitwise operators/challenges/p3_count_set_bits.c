/*Calculate the total count of set bits (1s) in the binary representation of all numbers from 1 up to a given number n.*/


#include<stdio.h>

int count(unsigned int n) 
{
    int c=0;
    for(int i=0;i<=31;i++) 
    {
        if((n>>i)&1)
        c++;
    }
   return c;
}

int main() {
    unsigned int n;
    printf("enter nth number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("set bits in %d is %d\n",i,count(i));
      
    }
    
    
}
