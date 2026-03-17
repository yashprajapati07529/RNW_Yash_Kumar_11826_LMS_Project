#include <stdio.h>


void add(int a, int b) { printf("Addition of %d and %d is %d\n", a, b, a + b); }
void sub(int a, int b) { printf("Subtraction of %d and %d is %d\n", a, b, a - b); }
void mul(int a, int b) { printf("Multiplication of %d and %d is %d\n", a, b, a * b); }
void div(int a, int b) { 
    if(b != 0) printf("Division of %d and %d is %d\n", a, b, a / b);
    else printf("Error: Division by zero\n");
}
void mod(int a, int b) { printf("Modulo of %d and %d is %d\n", a, b, a % b); }

int main() {
    int choice, n1, n2;

    do {
        printf("\nPress 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &n1);
            printf("Enter the second number: ");
            scanf("%d", &n2);
        }

        switch (choice) {
            case 1: add(n1, n2); break;
            case 2: sub(n1, n2); break;
            case 3: mul(n1, n2); break;
            case 4: div(n1, n2); break;
            case 5: mod(n1, n2); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
