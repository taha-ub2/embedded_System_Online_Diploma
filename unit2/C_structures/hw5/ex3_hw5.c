/*
 * hw5 done by Taha Omar Boulmane on 26/01/2021
 */

#include <stdio.h>
struct SComplex	{	float m_R;	float m_I;	};

struct SComplex ReadComplex (char* number)
{
	struct SComplex C;
	printf("For %s complex number\n", number);
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f", &C.m_R, &C.m_I);
	return C;
}

struct SComplex AddComplex (struct SComplex C1, struct SComplex C2)
{
	struct SComplex sum;
	sum.m_R = C1.m_R + C2.m_R;
	sum.m_I = C1.m_I + C2.m_I;
	return sum;
}
int main (void)
{
	struct SComplex C1, C2, C;
	C1 = ReadComplex ("1st");	C2 = ReadComplex ("2nd");
	C  = AddComplex (C1, C2);
	printf("Sum = %.1f + i%.1f\n", C.m_R, C.m_I);
	return 0;
}


