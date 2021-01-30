/*
 * hw4 done by Taha Omar Boulmane on 14/01/2021
 */

#include <stdio.h>

unsigned long int Factorial (int num);

int main (void)
{
	int num;

	printf("Enter a positive integer: ");
	fflush(stdin);		  fflush(stdout);
	scanf("%d", &num);

	printf("%d! = %lu\n", num, Factorial (num));
	return 0;
}

unsigned long int Factorial (int num)
{
	unsigned long int fact = 1;

	if   (num == 0)	{ fact = 1; }
	else
	{
		fact = num * Factorial(num -1);
	}
	return fact;
}
