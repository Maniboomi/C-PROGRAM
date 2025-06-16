#include<stdio.h>
int* findlarger(int *n1,int *n2)
{
	if(*n1 > *n2)
	{
		return n1;
	}
	else
		return n2;
};
int main()
{
	int *result, num1, num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	result = findlarger(&num1, &num2);
	printf("The number %d is larger.\n",*result);
}
