#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void append(char *a,int n){
	int m;
	printf("enter the size of string to append\n");
	scanf("%d",&m);
	//if((n-strlen(a))>=m){
char *p=(char *)malloc(m*sizeof(char));
printf("Enter the string to append\n");
scanf("%s",p);
strncat(a,p,m);


	//	}
	
//		printf("buffer limit exceeded\n");
}
int main()
{
int n=10;
printf("Enter the buffer size\n");
scanf("%d",&n);
//printf("%d\n",n);
char *p=(char *)malloc(n*sizeof(char));
char *q=(char *)malloc(n*sizeof(char));
printf("Enter the string\n");
//scanf("%s",q);
//rewind(stdin);
getchar();
fgets(q,n,stdin);
//strncpy(p,q,n);
int i;
for(i=0;q[i];i++){

if(*(q+i)!='\n')
	*(p+i)=*(q+i);
}

printf("Data read is %s\n",p);
append(p,n);
printf("After Appending  %s\n",p);
}
