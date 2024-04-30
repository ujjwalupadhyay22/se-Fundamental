#include<stdio.h>
//27.Convert days into months

main()
{
	
	 int days;

    // Accept number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    
	int months, remainingDays;

    // Calculate months
    months = days / 30;

    // Calculate remaining days
    remainingDays = days % 30;

    // Display the result
    printf("%d days is equivalent to %d months and %d days.\n", days, months, remainingDays);
}
