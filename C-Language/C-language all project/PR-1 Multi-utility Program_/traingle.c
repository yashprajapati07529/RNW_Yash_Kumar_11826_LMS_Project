
#include<stdio.h>

main(){
	
	//find the triangle value//
	
	float first, second, third;
	
	printf("Enter the First angle: ");
	scanf("%f", &first);
	
	printf("Enter the Second angle: ");
	scanf("%f", &second);
	
	third =  180 - (first + second);
	
	printf("Value of third angle %.2f", third);
	
	
}
