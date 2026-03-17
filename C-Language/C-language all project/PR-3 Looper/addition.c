
#include <stdio.h>

int main() {
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    
    last = n % 10;

    first = n;
    while (first >= 10) {
        first = first / 10;
    }

    sum = first + last;
    printf("Sum: %d\n", sum);

    return 0;
}