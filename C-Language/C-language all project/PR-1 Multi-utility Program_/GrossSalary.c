
#include<stdio.h>

main(){
	
	// find the gross salary //
	
	float HRA, DA, TA, BS, GS;
	
	
	printf(" Enter the Base salary: ");
	scanf("%f", &BS);
	
	HRA = BS * 10/100;
	DA = BS * 5/100;
	TA = BS * 8/100;
	
	printf("HRA %.2f ", HRA);
	printf("DA %.2f ", DA);
	printf("TA %.2f ", TA);
	
	GS = BS + HRA + DA + TA;
	
	printf("\nValue of Gross Salary %.2f", GS);
	
}
