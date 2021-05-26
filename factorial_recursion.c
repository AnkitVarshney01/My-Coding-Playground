#include <stdio.h>

unsigned long long int factorial(unsigned int m) {

   if(m <= 1) {
      return 1;
   }
   return m * factorial(m - 1);
}

int  main() {
   int z;
   scanf("%d", &z);
   printf("Factorial of %d is %d\n", z, factorial(z));
   return 0;
}