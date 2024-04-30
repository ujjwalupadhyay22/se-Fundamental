#include<stdio.h>
//13.Find character value from ascii
main()
{
    int asci;
    char character;
    
    printf("Enter the ASCII value: ");
    scanf("%d", &asci);
    
    // Convert ASCII value to character
    character = (char)asci;
    
    //print the character from ascii value
    printf("Character for ASCII value %d is: %c\n", asci, character);
}
