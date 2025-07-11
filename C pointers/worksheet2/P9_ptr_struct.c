#include<stdio.h>
#include<stdlib.h>
struct st{
int x;

};
void modify(struct st* ptr)
{
ptr->x=32;
}

int main()
{
    struct st v;
struct st *p=&v;
scanf("%d",&p->x);
printf("%d\n",p->x);
modify(p);
printf("%d\n",p->x);
struct st*ptr=(struct st*)malloc(sizeof(struct st));
scanf("%d",&ptr->x);
printf("%d",ptr->x);

}
