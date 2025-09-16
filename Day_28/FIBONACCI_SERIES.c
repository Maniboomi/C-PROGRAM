#include<stdio.h>
int main()
{
	int num,i;
	int first = 0;
	int second = 1;
	int next = 0;
	printf("Enter a Number :");
	scanf("%d",&num);
	printf("The Fibonacci Series are : ");
	printf("%d %d ",first,second);
	for(i=2;i<num;i++)
	{
		next = first+second;
		first = second;
		second = next;
		printf("%d ",next);
	}
	printf("\n");
	printf("The Fibonacci Series of Number %d is : %d\n",num,second);
	return 0;
}


