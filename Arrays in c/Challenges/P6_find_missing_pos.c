/*Find the first missingpositive integer in an unsorted array

Example:Input: {3 4 -1 1}
Output:2*/
#include <stdio.h>

int main() {
    int n,i,j,found;
      printf("Enter the number of elemets:\n");
    scanf("%d", &n);
    int a[n];
printf("input:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i <= n + 1; i++) {
        found = 0;
        for ( j = 0; j < n; j++) {
            if (a[j] == i) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("The missing element is %d\n", i);
            break;
        }
    }


}
