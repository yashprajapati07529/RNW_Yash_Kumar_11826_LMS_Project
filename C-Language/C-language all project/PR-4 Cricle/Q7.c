#include <stdio.h>

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
           
            if (j == 0 || i == 0 || i == 2 || (j == size - 1 && i < 2)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
