#include<stdio.h>
void printbinary(int reg)
{
	for(int i=7;i>=0;i--)
	{
		printf("%d",(reg>>i)&1);
	}
	printf("\n");
}
int main()
{
	int reg =0;
	printf("Initial register :");
	printbinary(reg);
	int pos = 2;
	printf("After set bit 2 :");
	reg = reg | (1<<pos);
	printbinary(reg);
	pos = 2;
	printf("After clear bit 2 :");
	reg = reg & ~(1<<pos);
	printbinary(reg);
	pos = 3;
	printf("After toggle bit 3 :");
	reg = reg ^(1<<pos);
	printbinary(reg);
	int value = (reg>>pos)&1;
	printf("Read bit 3 is :%d\n ",value);
	return 0;
}




