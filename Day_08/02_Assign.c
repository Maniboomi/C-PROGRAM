//SALARY_CALCULATION
#include<stdio.h>
#define BONUS 1000
int main()
{
	float Basic_salary;
	const float Tax_Rate = 0.1;
	float Net_salary;
	printf("Enter Your Salary :");
	scanf("%f",&Basic_salary);
	Net_salary = Basic_salary + (float)BONUS - (Basic_salary * Tax_Rate);
	printf("The Bonus Amount : %d\n",BONUS);
	printf("The Tax_Rate : %.2f\n",Tax_Rate * 100);
	printf("The Net_salary : %.2f\n",Net_salary);
	return 0;
}
