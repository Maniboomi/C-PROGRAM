//SUM_AVERAGE 
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float average;
	a = 10;
	b = 20;
	c = 30;
	sum = a+b+c;
	average = sum / 3.0;
	printf("The Three variables are a = %d b = %d c = %d\n",a,b,c);
	printf("Enter the sum of three variables : %d\n",sum);
	printf("Enter the average of three variables : %.2f\n",average);
	return 0;
}
