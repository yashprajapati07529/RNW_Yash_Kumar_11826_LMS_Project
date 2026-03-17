//PR-1 Multi-Utility program//

#include<stdio.h>

main(){
	
	//find the temperature converter of fahrenheit//
	
	float celsius, fahrenheit;

	
	printf(" Enter the Value of celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (9.0/5.0 * celsius) + 32;
	
	printf(" The temperature is Fahrenheit %f", fahrenheit);
	
	
}
