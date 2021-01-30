/*
 * homework_2 ex8 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	char op;
	float a,b;
	printf("Enter operator either + , - , * or / : ");
	scanf("%c",&op);
	printf("Enter two operands: ");
	scanf("%f %f",&a,&b);
	switch(op){
	case '+':
	{
		printf("%f %c %f = %f",a,op,b,a+b);
	}
	break;
	case '-':
	{
		printf("%f %c %f = %f",a,op,b,a-b);
	}
	break;
	case '*':
	{
		printf("%f %c %f = %f",a,op,b,a*b);
	}
	break;
	case '/':
	{
		printf("%f %c %f = %f",a,op,b,a/b);
	}
	break;
	default :
		printf("You didn't enter a valid operator");
	}
}

