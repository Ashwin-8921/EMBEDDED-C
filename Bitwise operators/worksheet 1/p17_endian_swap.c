#include <stdio.h>

unsigned int swap(unsigned int x) 
{
    unsigned int b0,b1,b2,b3,res;
    b0=(x>>0)&0xFF;   
    b1=(x>>8)&0xFF;   
    b2=(x>>16)&0xFF;  
    b3=(x>>24)&0xFF;  

    res=0;
    res|=b0<<24;  
    res|=b1<<16;  
    res|=b2<<8;   
    res|=b3<<0;  

    return res;
}

int main() {
    unsigned int n;
    printf("Enter number (hex): ");
    scanf("%x",&n);

    printf("%x\n",n);
    printf("%x\n",swap(n));

    return 0;
}
