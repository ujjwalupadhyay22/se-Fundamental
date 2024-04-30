#include<stdio.h>
main()
{
	 float fahrenheit, celsius;

    // Accept temperature in Fahrenheit from user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("Temperature in Celsius: %.2f\n", celsius);
}
