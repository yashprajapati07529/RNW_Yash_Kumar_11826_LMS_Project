
#include <stdio.h>

int main() {
	
	
	
    float state, AC, eng, BA, hindi, ECO, total, P;
    
    printf("Enter the marks of State:-");
    scanf("%f", &state);
    
    printf("Enter the marks of Account:-");
    scanf("%f", &AC);
    
    printf("Enter the marks of English:-");
    scanf("%f", &eng);
    
    printf("Enter the marks of BA:-");
    scanf("%f", &BA);
    
    printf("Enter the marks of Economics:-");
    scanf("%f", &ECO);
    
    printf("Enter the marks of Hindi:-");
    scanf("%f", &hindi);
    
    total = state + AC + eng + BA + hindi + ECO;
    
    P = (total/600)*100;
    
    printf("Value of Percentage:- %.2f\n", P);
    
    char grade;
    
    
    if(P >= 90){
		grade = 'A';
    }else if (P >= 80){
        grade = 'B';
    }else if (P >= 70){
        grade = 'C';
    }else if (P >= 60){
      grade = 'D';
    }else if (P >= 50){
        grade = 'E';
    }else {
       grade = 'F';
    }
    
    printf("Your grade is %c.\n", grade);
    
    switch (grade){
    	case 'A':
    		printf("Exellent work.\n");
    		break;
		case 'B':
    		printf("Well done.\n");
    		break;		
    	case 'C':
    		printf("Good job.\n");
    		break;	
		case 'D':
    		printf("You passed, but you could do better.\n");
    		break;	
		case 'E':
    		printf("You passed, but barely.\n");
    		break;	
    	case 'F':
    		printf("Sorry, you are failed\n");
    		break;
    	default:
    		printf("Invalid grade.\n");
    	
	}
    
    
    
        
    
    
    
    
}
