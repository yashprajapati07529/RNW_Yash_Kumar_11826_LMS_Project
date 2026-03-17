#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the Array Rows:- ");
    scanf("%d", &rows);
    printf("Enter the Array Coloms:- ");
    scanf("%d", &cols);

   
    int matrix[rows][cols];

    
    printf("\n%d x %d Enter the Array element:-\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int max = matrix[0][0]; 
    int rPos = 0, cPos = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                rPos = i;
                cPos = j;
            }
        }
    }

    
    printf("\n--- Result ---\n");
    printf("Sabse bada element (Largest): %d\n", max);
    printf("Location: Row %d, Column %d\n", rPos, cPos);

    return 0;
}
