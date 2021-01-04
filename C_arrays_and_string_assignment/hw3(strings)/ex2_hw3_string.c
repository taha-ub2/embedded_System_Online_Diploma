/*
 * hw3(strings done by Taha Omar Boulmane on 03/01/2020
 */
#include <stdio.h>
void main(){
	char s[1000];
	int i;
	printf("Enter a string: ");
	gets(s);
	for(i=0;s[i]!=0;i++);
	printf("Length of string: %d",i);
}

