#include<stdio.h>
long bintodec(int decimal)
{
	long binary = 0,reminder, f=1;
	while(decimal != 0)
	{
		reminder = decimal % 2;
		binary = binary + reminder * f;
		f = f * 10;
		decimal = decimal / 2;
	}
	return binary;
}
int main()
{
	long binary;
	int decimal;
	printf("Enter any Decimal number : ");
	scanf("%d",&decimal);
	binary = bintodec(decimal);
	printf("The Binary Value is : %ld\n",binary);
	return 0;
}

