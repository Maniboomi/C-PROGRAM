#include<stdio.h>
int main()
{
	int num = 20;
	printf("The Initial Number : %d\n",num);
	num = num | (1 << 6);
	printf("After Set the Bit 6 : %d\n",num);

	num = num & ~(1 << 6);
	printf("After Clear the Bit 6 : %d\n",num);

	num = num ^ ( 1 << 6);
	printf("After Toggle the Bit 6 : %d\n",num);
	return 0;
}



