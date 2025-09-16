#include<stdio.h>
/*int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}*/
int factorial(int* n)
{
	if(*n == 0)
	{
		return 1;
	}
	int temp = (*n) - 1;
	return *n * factorial(&temp);
}
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf("Factorial of %d is : %d\n",n,factorial(&n));
	return 0;
}
