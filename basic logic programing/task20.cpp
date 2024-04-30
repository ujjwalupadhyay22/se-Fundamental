#include<stdio.h>
//20.Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
main()
{
	float monthly_salary,insurance_premium,remaining_salary,loan_installment;
	printf("Enter monthly salary");
	scanf("%f",&monthly_salary);
//	calculate insurance premium 10%
	insurance_premium = 0.1*monthly_salary;
	
	remaining_salary=monthly_salary-insurance_premium;
	
//	calculate loan_installment 10%
//    loan_installment = 0.1*remaining_salary;
//    remaining_salary -= loan_installment;
    
    
	printf("salary after 10% deduction of insurance premium %f",remaining_salary);
}
