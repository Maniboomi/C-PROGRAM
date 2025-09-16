#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	int prime = 1;
	printf("Enter Any Number :");
	scanf("%d",&a);
	int b = sqrt(a);
	for(i=2;i<=b;i++)
	{
		if( a % i == 0)
		{
			prime = 0;
			break;
		}
	}
	if( prime == 0)
	{
		printf("The given number is not prime\n");
	}
	else
	{
		printf("The given number is prime\n");
	}
	return 0;
}
