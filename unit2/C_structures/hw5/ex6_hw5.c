/*
 * hw5 done by Taha Omar Boulmane on 26/01/2021
 */

#include <stdio.h>

union job
{
	char  name[32];
	float salary;
	int   worker_no;
} u;

struct job1
{
	char  name[32];
	float salary;
	int   worker_no;
} s;

int main(void)
{
	printf("size of union     = %d\n", sizeof(u));
	printf("size of structure = %d\n", sizeof(s));
	return 0;
}



