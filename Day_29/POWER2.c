#include<stdio.h>
void power2(int num)
{
	if((num & (num - 1)) == 0)
	{
		printf("The given Number is Power of 2\n");
	}
	else
	{
		printf("Not Power of 2\n");
	}
}
void power4(int num)
{
	if((num & (num - 1))==0 && (num & 0x55555555))
	{
		printf("The given Number is Power of 4\n");
	}
	else
	{
		printf("The given Number is Not the Power of 4 but Power of 2\n");
	}
}	
int main()
{
	int num ;
	printf("Enter a Number : ");
	scanf("%d",&num);
	power2(num);
	power4(num);
	return 0;
}
