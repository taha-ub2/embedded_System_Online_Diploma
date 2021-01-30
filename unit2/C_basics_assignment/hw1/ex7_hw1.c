/*
 * homework ex1 by : Taha Omar Boulmane this homework is done on 31/20/2020
 */
#include "stdio.h"
void main(){
	float a,b,c;
	printf("Enter value of a: ");
	//fflush(stdout);                  //I am working with Code::Blocks so the  buffering is no more a problem
	scanf("%f",&a);
	printf("Enter value of b: ");
	//fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	printf("a=%.2f\n",a);               // I added these prints to see what happen step by step
	b=a-b;
	printf("b=%.2f\n",b);
	a=a-b;
	printf("a=%.2f\n",a);
	printf("After swapping, value of a = %.2f\n value of b = %.2f",a,b);
}


