#include<stdio.h>

int main(){
	
	int size , i, j;
	
	printf("Enter the array's row & column size:- ");
	scanf("%d", &size);
	
	int a[size][size];
	
	printf("Enter array's elemnts: \n");
	
	for( i = 0; i < size; i++){
		for(j = 0; j<size; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);	
		}
	}
	
	printf("\nThe transpose matrix of an array: \n");
		for( i = 0; i < size; i++){
		for(j = 0; j<size; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
	
}