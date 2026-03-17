#include<stdio.h>

void main(){
	
	
	int n, count;
	
	count = 0;
	
	printf("Enter any number:- ");
	scanf("%d", &n);
	
	while(n != 0){
		
		n /= 10;
		
		++count;
		
	}
	
		printf("Total number of digit: %d\n", count);	
}