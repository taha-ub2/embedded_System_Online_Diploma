/*
 * homework_2 ex1 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	int a;
	printf("Enter an integer you wanna check: ");
	scanf("%d",&a);
	if(a&1){
		printf("%d is odd.",a);
	}
	else{
		printf("%d is even.",a);
	}
}

