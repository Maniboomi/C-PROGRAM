#include<stdio.h>
int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int var = n;
	int sum = 0;
	while(n>0)
	{
		int rem = n % 10;
		sum = (sum) + (rem * rem * rem);
		n = n / 10;
	}
	if(var == sum)
	{
		printf("%d is an armstrong\n", var);
	}
	else
	{
		printf("%d is not an armstrong\n",var);
	}
	return 0;
}
