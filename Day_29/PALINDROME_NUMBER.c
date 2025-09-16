#include<stdio.h>
int main()
{
	int a,rev=0,reverse =0,temp=0;
	printf("Enter any Number :");
	scanf("%d",&a);
	reverse = a;
	while( a != 0)
	{
		rev = a % 10;
		temp = temp * 10 + rev;
		a /= 10;
	}
	if(temp == reverse)
	{
		printf("The given number is Palindrome\n");
	}
	else
	{
		printf("The given number is not Palindrome\n");
	}
	return 0;
}
