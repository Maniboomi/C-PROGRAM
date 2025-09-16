#include<stdio.h>
#define PI 3.14
int main()
{
	int radius;
	float area;
	char unit;
	printf("Enter Radius Of a Circle: ");
	scanf("%d", &radius);
	printf("Enter Unit Of Measurement(eg., c for cm): ");
	scanf(" %c", &unit);
	area = PI * (float)(radius * radius);
	printf("The Size of Float Variable: %lu bytes \n", sizeof(area));
	if (area > 0)
	{
		printf("Area = %.2f %c %c \n",area,unit,178);
	}
	else
	{
		printf("Invalid Radius Entered. \n");
	}
	return 0;
}

