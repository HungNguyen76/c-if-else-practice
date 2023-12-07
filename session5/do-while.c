#include <stdio.h>


int main() {
   /* int n = 1234;
    do {
        printf("%d\n", n);
        ++n;
    } while(n > 0);*/
   int number;
   int sum = 0;
   do {
       printf("Enter a number: ");
       scanf("%d", &number);
       sum += number;
   } while (number > 0);
   printf("\nSum = %d", sum);
}