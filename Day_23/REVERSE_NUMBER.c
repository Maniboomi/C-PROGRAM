#include<stdio.h>
int main()
{
	int n, rev = 0, r = 0;
	printf("Enter the number to be reversed : ");
	scanf("%d",&n);
	while(n != 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	printf("The reversed number is : %d\n",rev);
	return 0;
}

