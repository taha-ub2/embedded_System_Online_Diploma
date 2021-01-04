/*
 * hw3(strings done by Taha Omar Boulmane on 03/01/2020
 */
#include <stdio.h>
#include <string.h>
void main(){
	char reverse[100];
	char str[100];
	int i ,j;
	printf("Enter the string  : ");
	gets(str);
	for(i=0,j=strlen(str)-1;j>=0;i++,j--){
		reverse[i]=str[j];
	}
	reverse[i]=0;
	printf("Reverse string is : %s",reverse);
}

