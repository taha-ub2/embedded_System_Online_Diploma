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
	printf("\nEnter element to be inserted : ");
	scanf("%d", &element);
	printf("\nEnter location : ");
	scanf("%d", &pos);
	pos--;          // because arrays start from position 0
        for (i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];       // moving old element to the right to let a place for the coming element
        }
	arr[pos] = element;
	n++;            //to host the new element without throwing old ones
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

