/*12.Question: Sort array in descending order
Question description: Write a C program to sort array elements in descending order.
Sample data:
Input: 7 2 9 4
Expected output:
Sorted array: 9 7 4 2*/

#include<stdio.h>

void main()
{
   int ele;
    printf("Enter the number of elemets:\n");
    scanf("%d",&ele);
int a[ele+1];
int i,j,temp;
printf("Enter the array elements\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
    for(i=0;i<ele;i++)
    {
        for(j=0;j<ele-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("output:");
     for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
}