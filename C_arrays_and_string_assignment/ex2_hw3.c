/*
 * hw3 done by Taha Omar Boulmane on 02/01/2021
 */

#include <stdio.h>
void main(){
	printf("this program calculates average using arrays\n");
	float arr[100];
	int n,i;
	float avg=0;

        printf("Enter the number of data: ");
        scanf("%d",&n);

        for(i=0;i<n;i++){
            printf("%d. Enter number: ",i+1);
            scanf("%f",arr+i);       //taking elements
        }

        for(i=0;i<n;i++){
            avg+=arr[i];             //summing data
        }
        //avg
        avg/=n;                      //calculating avg
        printf("Average = %.2f",avg);

}

