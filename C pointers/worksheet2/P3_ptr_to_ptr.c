#include<stdio.h>
void func(int **q)
{
q=(int **)malloc(sizeof(int *));
*q=(int *)malloc(sizeof(int));
**q=87;

}
int main()
{
int **p=(int **)malloc(sizeof(int *));
*p=(int *)malloc(sizeof(int));
**p=45;
printf("%d\n",**p);
func(p);
printf("%d\n",**p);
}
