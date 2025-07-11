#include<stdio.h>
typedef void(*func)(void);
typedef struct st
{
func init;
}DRIVER;

void driver_init(void)
{
printf("In init function\n");
}


void driver_read(void)
{
printf("In read function\n");
}


void driver_write(void)
{
printf("In write function\n");
}


void driver_end(void)
{
printf("In end function\n");
}
int main()
{
DRIVER v;
int op;
while(1){
printf("Enter option 1.init 2.read 3.write 4.end\n");
scanf("%d",&op);
switch(op){
	case 1:v.init=driver_init;
	       break;
	case 2:v.init=driver_read;
	       break;
	case 3:v.init=driver_write;
	       break;
	case 4:v.init=driver_end;
	       break;
	default:printf("Invalid option\n");return 0;

}
v.init();
}
}
