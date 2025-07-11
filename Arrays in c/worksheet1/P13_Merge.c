/*Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6 */

#include<stdio.h>
int main()
{
    int a[3]={1,2,3},b[3]={4,5,6},c[6],i,j=0;
    for(i=0;i<3;i++)
    c[j++]=a[i];
    for(i=0;i<3;i++)
    c[j++]=b[i];

    printf("Merged Array:\n");
    for(i=0;i<6;i++)
    printf("%d ",c[i]);
}