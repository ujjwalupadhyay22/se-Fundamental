#include<stdio.h>
//24.Accept 5 employees name and salary and count average and total salary
main()
{
	char names[5][50];
    float salaries[5];
    float totalSalary = 0, averageSalary;
    int i;

    // Accepting names and salaries of 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        
        // Adding salary to total salary
        totalSalary += salaries[i];
    }

    // Calculating average salary
    averageSalary = totalSalary / 5;

    // Displaying total and average salary
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);
}
