#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void concatenate(char *p)
{char *q=(char *)malloc(10*sizeof(char));
printf("Enter the string to concatenate\n");
scanf(" %[^\n]",q);
	while(*p!='\0')
	*p++;
while(*q!='\0')
	*p++=*q++;

}
void copy(char *p)
{
	char *q=(char *)malloc(10*sizeof(char));
	printf("Enter the string to copy\n");
	scanf(" %[^\n]",q);
while(*q!='\0')
	*p++=*q++;
*p='\0';
}
void reverse(char *p)
{
char *q=(char *)malloc(10*sizeof(char));
q=p+(strlen(p)-1);
char c;
while(p<q){
c=*q;
*q=*p;
*p=c;
p++;
q--;
}

}
int main()
{
int n;
printf("Enter the size of stringSSs\n");
scanf("%d",&n);
char *p=(char *)malloc(n*sizeof(char));
printf("Enter the string\n");
scanf(" %[^\n]",p);
concatenate(p);
printf("after concatenation:%s\n",p);
copy(p);
printf("after copy:%s\n",p);
reverse(p);
printf("reverse:%s\n",p);
}

