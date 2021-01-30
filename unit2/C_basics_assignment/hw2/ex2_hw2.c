/*
 * homework_2 ex2 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	char a;
	printf("Enter an alphabet: ");
	scanf("%c",&a);
	switch(a){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("%c is a vowel.",a);
		break;
	default :
		printf("%c is a consonant.",a);
	}
}

