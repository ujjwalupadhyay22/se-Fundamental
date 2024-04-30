#include<stdio.h>

//17.Calculate person’s insurance premium based on salary

main(){
	float salary,premium;
	printf("Enter your Salary : ");
	scanf("%f",salary);
	
	// claculating insurance based on salary
	if(salary<0){
		printf("Enter valid salary");
	}
	else if(salary<20000){
		premium = 0.05*salary ;
	}
	else if (salary >= 50000 && salary < 100000) {
        premium = 0.07 * salary; // 7% of salary for premium
    }
	 else {
        premium = 0.1 * salary; // 10% of salary for premium
    }
}
