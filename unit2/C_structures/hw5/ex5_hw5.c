/*
 * hw5 done by Taha Omar Boulmane on 26/01/2021
 */
#include <stdio.h>

#define PI 3.1415
#define area(r) (PI*r*r)

int main (void)
{
	float radius;

	printf("Enter the radius: ");
	scanf("%f", &radius);

	printf("Area = %.2f\n", area(radius));
	return 0;
}

