#include<stdio.h>
int main()
{
	int num = 27;
	int i = 2,j = 4;
	int bit = 0;
	printf("The Initial Value is : %d\n",num);

	int bit_i = (num >> i) & 1;
	int bit_j = (num >> j) & 1;

	if(bit_i != bit_j)
	{
		num = num ^ (1<<i);
		num = num ^ (1<<j);
	}
	printf("After Swap The Bit2 and Bit4 : %d\n",num);
	return 0;
}
