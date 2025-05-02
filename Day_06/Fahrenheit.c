#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter the Celsius Value : ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5)+32;
	printf("The Converted Fahrenheit Value is: %.2f°C\n",fahrenheit);
	return 0;
}
