#include<stdio.h>

void main(){
	
	int i, j, k, l;
	
	for( i = 1; i <= 5; i++){
		
		for(k=1; k<=5-i; k++){
			printf(" ");
		}
		
		for(j = i; j<2*i-1; j++){
			
			printf("%d", j);
			
		}
		
		for(l = 2*i-1; l>=i; l--){
			
			printf("%d", l);
			
		}
		
		printf("\n");		
	}	
}