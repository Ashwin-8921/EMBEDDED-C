#include <stdio.h>



void print(int i) 
{
    printf("binary: ");
    for(int pos=31;pos>=0;pos--) 
    {
        printf("%d", i>>pos&1);
    }
    printf("\n");
}


void count(unsigned int n) 
{
    int c=0;
    for(int i=0;i<=31;i++) 
    {
        if((n>>i)&1)
        c++;
    }
    printf("Set bits: %d\n", c);
}

 union 
    {
        float f;
        unsigned int u;
    } data;


int main() {
   
    printf("Enter a float: ");
    scanf("%f", &data.f);

    printf("Binary representation of float:\n");
    print(data.u);

    count(data.u);
   

}
