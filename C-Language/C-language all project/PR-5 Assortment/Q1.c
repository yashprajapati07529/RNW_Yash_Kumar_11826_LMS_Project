#include <stdio.h>

int main() {
    int n;

    printf("Enter the array's size: ");
    scanf("%d", &n);

    
    int a[n]; 

    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);

        scanf("%d", &a[i]); 
    }

    printf("\nNegative elements from an Array: ");
    int first = 1; 
    for (int i = 0; i < n; i++) {
       
        if (a[i] < 0) { 
            if (!first) {
                printf(", ");
            }
            printf("%d", a[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
