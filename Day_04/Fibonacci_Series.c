#include<stdio.h>
int main()
{
	int n,i;
	int a= 0, b= 1, next;
	printf("Enter the Number of Terms:");
	scanf("%d",&n);
	printf("Fibonacci Series:");
	for(i=0; i<=n; i++)
	{
	printf("%d",a);
	next = a+b;
	a = b;
	b = next;
	}
	printf("Enter The Sum of Fibonacci Series: %d\n",next);
	return 0;
}
