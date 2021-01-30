/*
 * homework_2 ex3 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	float a,b,c;
	printf("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("the Largest number is %f",(a>b? (a>c? a:c):(b>c? b:c)));

}

