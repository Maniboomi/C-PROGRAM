//FAHRENHEIT_CELSIUS
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter the Fahrenheit Value: ");
	scanf("%f",&fahrenheit);
	celsius = 5.0/9.0 *(fahrenheit - 32);
	printf("The Celsius Value Is :%.2f°C\n",celsius);
	return 0;
}
