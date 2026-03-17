#include <stdio.h>

// User Defined Function (UDF) using Pointers
void findCube(int *ptr) {
    *ptr = (*ptr) * (*ptr) * (*ptr);
}

int main() {
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            findCube(&a[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
