#include<stdio.h>

int main(){
	
	int rows, cols, r, c, i, j;
	
	printf("Enter the array's row size:- ");
	scanf("%d", &rows);
	printf("Enter the array's column size:- ");
	scanf("%d", &cols);
	
	int a[rows][cols];
	
	printf("Enter array's elemnts: \n");
	
	for( i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);	
		}
	}
	
	printf("Enter rows number:- ");
	scanf("%d", &r);
	
	int rowsum = 0;
	
	printf("Elements of row %d: ", r);
	for ( int j = 0; j < cols; j++){
		printf("%d", a[r][j]);
		if (j < cols - 1) printf(", ");
		
		rowsum += a[r][j];
	}
	printf("\nThe sum of row %d: %d\n",r, rowsum);
	
	
	
	printf("Enter column number:- ");
	scanf("%d", &c);
	
	int colsum = 0;
	
	printf("Elements of column %d: ", c);
	for( int i = 0; i < rows; i++){
		printf("%d", a[c][i]);
		if (j < rows - 1) printf(", ");
		
		colsum += a[c][i];
	}
	printf("\nThe sum of column %d: %d\n", c, colsum );
	
	return 0;
	
}