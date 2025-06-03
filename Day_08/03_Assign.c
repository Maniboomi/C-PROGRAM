//STUDENT PASS/FAIL RESULT CHECKER
#include<stdio.h>
int main()
{
	int tamil,english,maths,science,social;
	int total;
	int pass;
	float average;
	printf("Enter the tamil mark : ");
	scanf("%d",&tamil);
	printf("Enter the english mark : ");
	scanf("%d",&english); 
	printf("Enter the maths mark : ");
	scanf("%d",&maths); 
	printf("Enter the science mark : ");
	scanf("%d",&science); 
	printf("Enter the social mark : ");
	scanf("%d",&social); 
	total = tamil+english+maths+social+science;
	average =  total / 5.0;
	pass = (tamil >= 35)&&(english >=35)&&(maths >=35)&&(science >=35)&&(social >=35);
	if (pass)
	{
		printf("Total marks = %d\n",total);
		printf("Average = %.2f\n",average);
		printf("The student is pass\n");
	}
	else
	{
		printf("The student is fail\n");

	}
	return 0;
}
