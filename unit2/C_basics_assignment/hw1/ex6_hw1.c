/*
 * homework ex1 by : Taha Omar Boulmane this homework is done on 31/20/2020
 */
#include <stdio.h>
int main(){
      float a, b, temp;
      printf("Enter value of a: ");
      scanf("%f",&a);
      printf("Enter value of b: ");
      scanf("%f",&b);
      temp = a;    /* Value of a is stored in variable temp */
      a = b;       /* Value of b is stored in variable a */
      b = temp;    /* Value of temp(which contains initial value of a) is stored in variable b*/
      printf("\nAfter swapping, value of a = %.2f\n", a);
      printf("After swapping, value of b = %.2f", b);
      return 0;
}

