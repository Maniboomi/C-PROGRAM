#include<stdio.h>
void calculatefactorial()
{
	int num,i;
	long long factorial = 1;
	printf("Enter a positive integer : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		factorial *= i;
	}
	printf("Factorial of %d = %llu\n",num,factorial);
};
int main()
{
	calculatefactorial();
	return 0;
}

