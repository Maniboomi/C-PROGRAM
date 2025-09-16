#include<stdio.h>
int main()
{
	int first = 0, n, second = 1, third;
	printf("Enter how many fibonacci series to print : ");
	scanf("%d",&n);
	printf("The fibonacci series are :");
	printf("%d ",first);
	printf("%d ",second);
	for(int i=1;i<n;i++)
	{
		third = first + second;
		first = second;
		second = third;
		printf("%d ",third);
	}
	printf("\n");
	return 0;
}
