//14. Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) 
{
    if (num == 0 || num == 1) 
	{
        return 1;
    } 
	else 
	{
        return num * factorial(num - 1);
    }
}

int main() 
{
    int numbers[5] ,i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating and printing factorials
    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) 
	{
		//function call
        printf("Factorial of %d = %lld\n", numbers[i], factorial(numbers[i]));
    }
}//14. Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) 
{
    if (num == 0 || num == 1) 
	{
        return 1;
    } 
	else 
	{
        return num * factorial(num - 1);
    }
}

int main() 
{
    int numbers[5] ,i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating and printing factorials
    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) 
	{
		//function call
        printf("Factorial of %d = %lld\n", numbers[i], factorial(numbers[i]));
    }
}
