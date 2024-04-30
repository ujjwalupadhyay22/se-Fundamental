#include<stdio.h>
//23.WAP to calculate swap 2 numbers with using of multiplication and division.
main()
{
 int a = 10, b = 5;
 printf("Before swapping: num1 = %d, num2 = %d\n", a, b);
 a = a*b; // Store product of a and b in a          a = 10*5 = 50
 b = a / b; // Store original value of a in b       b = 50/5  = 10
 a = a / b; // Store original value of b in a	    a =  50/10 = 5 
  printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

}



