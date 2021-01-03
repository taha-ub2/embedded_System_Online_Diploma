/*
 * hw3 done by Taha Omar Boulmane on 02/01/2021
 */
#include <stdio.h>
void main() {

	int arr[20];
	int i, n, element, pos;
	printf("Enter no of elements (max 19) : ");
	scanf("%d", &n);
	printf("Enter elements : \n");

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\nEnter element to be searched for : ");
	scanf("%d", &element);
	for(i=0;i<n;i++){
		if(arr[i]==element){
			pos=i+1;
			break;
		}
	}
	if(i==n){
		printf("element isn't found.");
	}
	else{
		printf("element found at location = %d",pos);
	}
}
