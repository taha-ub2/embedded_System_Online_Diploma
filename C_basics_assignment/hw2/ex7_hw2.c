/*
 * homework_2 ex7 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	int a;
	unsigned long Fact=1;
	printf("Enter an integer: ");
	scanf("%d",&a);
	if(a<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else{
		int i;
		for(i=2;i<=a;i++){
			Fact*=i;
		}
		printf("Factorial = %lu",Fact);
	}
}

