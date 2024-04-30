#include<stdio.h>
//29.Cconvert minutes into seconds and hours

main()
{
	  int minutes, hours, seconds;

    // Input number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to hours and remaining minutes
    hours = minutes / 60;
    minutes = minutes % 60;

    // Convert hours to seconds
    seconds = hours * 3600;

    // Display the result
    printf("%d minutes is equivalent to %d hours, %d minutes, and %d seconds.\n", minutes + hours * 60, hours, minutes, seconds);
}
