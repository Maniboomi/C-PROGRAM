#include<stdio.h>
int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n * fact(n - 1);
}
int main()
{
	int n = 5;
	int factorial;
	float compute;
	factorial = fact(n);
	compute = 1.0 / factorial;
	printf("The compute of 1/n! is : %.5f\n",compute);
	return 0;
}
