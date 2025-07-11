/*In an array where every element appears twice except one, find that single unique number.*/



#include <stdio.h>

int unique(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++)
        res ^= arr[i]; 
    return res;
}


int main() {
    int n;
    printf("enter no of ele: ");
    scanf("%d", &n);

    int a[n];
    printf("enter the ele: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("unique ele=%d",unique(a, n));
}
