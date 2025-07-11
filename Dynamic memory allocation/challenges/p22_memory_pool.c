/*How could you build a simple memory pool using a fixed-size array in C? 
How would you write your own versions of malloc and free using this pool?*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char memory_pool[1024];
int block_used[32];

void* my_malloc() {
    for(int i=0;i<32;i++) 
    {
        if(!block_used[i]) 
        {
            block_used[i]=1;
            return(void*)&memory_pool[i*32];
        }
    }
    return NULL;
}

void my_free(void* ptr) 
{
    if(ptr==NULL)return;
    int offset=(char*)ptr - memory_pool;
    if(offset%32!=0||offset<0||offset>=1024) 
    {
        printf("Invalid pointer\n");
        return;
    }
    int index=offset/32;
    block_used[index]=0;
}

int main() {
    void*p1=my_malloc();
    void*p2=my_malloc();
    if(p1&&p2) 
    {
        strcpy(p1,"Hello");
        strcpy(p2,"World");
        printf("%s %s\n",(char*)p1,(char*)p2);
    }
    my_free(p1);
    my_free(p2);
    return 0;
}
