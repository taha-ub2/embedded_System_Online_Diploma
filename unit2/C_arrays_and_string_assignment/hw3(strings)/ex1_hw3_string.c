/*
 * hw3(strings done by Taha Omar Boulmane on 03/01/2020
 */
#include <stdio.h>
#include <string.h>
void main(){
	char s[100];
	char c;
	int i,count=0;
	printf("Enter a string : ");
	gets(s);
	printf("\nEnter a character to find frequency : ");
	c=getchar();
        for(i=0;s[i]!='\0';i++){
            if(s[i]==c){
                count++;
            }
        }
	printf("\nFrequency of %c = %d",c,count);
}

