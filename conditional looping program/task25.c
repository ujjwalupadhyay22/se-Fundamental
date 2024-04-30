//25. WAP
//i. Monday to Sunday using switch case 
//ii. Vowel or Consonant using switch case 

//i. Monday to Sunday using switch case 

#include <stdio.h>

//int main() {
//    int day;
//    
//    printf("Enter the day number from (1-7): ");
//    scanf("%d", &day);
//
//    switch(day) {
//        case 1:
//            printf("Monday\n");
//            break;
//        case 2:
//            printf("Tuesday\n");
//            break;
//        case 3:
//            printf("Wednesday\n");
//            break;
//        case 4:
//            printf("Thursday\n");
//            break;
//        case 5:
//            printf("Friday\n");
//            break;
//        case 6:
//            printf("Saturday\n");
//            break;
//        case 7:
//            printf("Sunday\n");
//            break;
//        default:
//            printf("Invalid day number!\n");
//    }
//}

//ii. Vowel or Consonant using switch case

int main()
{
	char ch;
	
	printf("Enter a Character:");
	scanf("%c",&ch);
	
	//switch: Character is vowel or not
	switch(ch)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("%c Character is vowel.",ch);
			break;
			
		default:
            if ((ch >= 'a' && ch <= 'z') ) 
			{
                printf("%c is a consonant.\n", ch);
            } 
			else 
			{
                printf("Invalid input. Please enter an alphabet.\n");
            }
            break;          
	}
}
