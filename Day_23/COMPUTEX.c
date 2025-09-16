#include<stdio.h>
#include<math.h>
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
	int n = 5 , x = 3;
	float factorial;
	float compute;
	factorial = fact(n);
	compute = pow(x,n) / factorial;
	printf("The compute of 1/n! is : %.5f\n",compute);
	return 0;
}
