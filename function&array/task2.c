#include<stdio.h>
//2. WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)

main()
{
	  char choice;
    float num1, num2, result;

    // Display menu
    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf(" %c", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on choice
    switch(choice) {
        case '1':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '2':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '3':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '4':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}
