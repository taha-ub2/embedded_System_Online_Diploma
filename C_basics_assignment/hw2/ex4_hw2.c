/*
 * homework_2 ex4 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	float a;
	printf("Enter a number: ");
	scanf("%f",&a);
	a>0? printf("%f is positive.",a): (a<0? printf("%f is negative.",a):printf("You entered zero."));
}

