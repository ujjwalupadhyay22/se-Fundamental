#include<stdio.h>
//28.Convert years into days and months
main()
{
	
	int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
//    convertYears(years); 
	int days, months;

    days = years * 365; // Assuming 365 days in a year
    months = years * 12; // Assuming 12 months in a year

    printf("%d years is equal to %d days and %d months.\n",  days, months);
}
