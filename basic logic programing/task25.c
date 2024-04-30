#include<stdio.h>
//25.Accept 5 expense from user and find average of expense
main()
{
	int expenses[5];
    int total = 0;
    // Accepting expenses from the user
    printf("Enter 5 expenses:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%d", &expenses[i]);
        total += expenses[i];
    }
    
    // Calculating the average
    int average = total / 5;
    // Displaying the average
    printf("Average expense: %d\n", average);
}



