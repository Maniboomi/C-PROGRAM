#include<stdio.h>
int fact(int n)
	{
		if(n==0)
			return 1;
		else
			return n*fact(n-1);
	}
int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	printf("Factorial is %d\n",fact(n));
}	
