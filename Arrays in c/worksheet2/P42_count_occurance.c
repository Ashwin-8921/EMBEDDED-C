/*Count occurrences of a number
Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times*/
#include<stdio.h>
int main()
{
int ele;
    printf("Enter the number of elemets:\n");
    scanf("%d",&ele);
    int arr[ele];
    int i,n,c;
    printf("Enter the array elements\n");
        for(i=0;i<ele;i++)
        scanf("%d",&arr[i]);
        printf("enter number to count:");
        scanf("%d",&n);
for(i = 0,c=0; i < ele; i++) 
    {
        if(arr[i]==n)
        {
            c++;
        }
    }
    printf("number %d apperas: %d",n,c);
}
