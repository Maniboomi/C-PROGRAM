#include<stdio.h>
float getInput();
int main()
{
	float f1,f2;
	f1=getInput();
	f2=getInput();
	printf("The Product of the two Number is %f",f1*f2);

float getInput()
{
	float f;
	printf("Enter a Decimal Number is :");
	scanf("%f",&f);
	return f;
}
}
