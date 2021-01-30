/*
 * homework_2 ex5 by : Taha Omar Boulmane this homework is done on 01/01/2021
 */
#include "stdio.h"
void main(){
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
            printf("%c is an alphabet",a);
        else
            printf("%c is not an alphabet",a);
}

