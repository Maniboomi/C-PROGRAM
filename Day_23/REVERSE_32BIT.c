#include<stdio.h>
int main()
{
	int num = 1234567890;
	int i , input , right, output = 0;
	for(i=0;i<32;i++)
	{
		input = 1 & (num>>i);
		output = output | (input << 31-i);
	}
	printf("The Reversed 32bit integer value is :%d\n",output);
	return 0;
}
