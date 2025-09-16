#include<stdio.h>
int main()
{
	int num = 123456;
	printf("The Default Number is : %d\n",num);
	int rev = 0;
	int temp = 0 ;
	while(num != 0)
	{
		rev = num % 10;
		temp = temp * 10 + rev;
		num /= 10;
	}
	printf("The Reversed Integer is : %d\n",temp);
	return 0;
}

