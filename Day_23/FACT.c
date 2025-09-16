#include<stdio.h>
int factorial(int fact(n),int n)
{
	if(n == 0)
	{
		return 0;
	}
	return factorial(n*fact(n),n-1);
}
int main()
{
	int fact = 5;
	int n = 5;
	factorial(fact,n);
