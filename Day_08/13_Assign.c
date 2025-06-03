//FLOAT_INT
#include<stdio.h>
int main()
{
	float float_number;
	int integer_number;
	printf("Enter any Floatnumber : ");
	scanf("%f",&float_number);
	integer_number = int(float_number);
	printf("the original float_number: %f\n",float_number);
	printf("The Converted integer_number: %d\n",integer_number);
}
