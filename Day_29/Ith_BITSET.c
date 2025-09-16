#include<stdio.h>

void ithbitset(int num,int check)
{
	int mask = 1 << (check - 1);
	if(num & mask)
	{
		printf("Bit 3 is set\n");
	}
	else
	{
		printf("Bit 3 is Not set\n");
	}
}
int main()
{
	int num = 20,check=3;
	printf("The Number is : %d\n",num);
	printf("The Binary Representation of Number is :");

	for(int i=31;i>=0;i--)
	{
		int bit = (num >> i) & 1;
		printf("%d",bit);
	}
	printf("\n");
	ithbitset(num,check);

	if( num & 1 )
	{
		printf("The LSB Bit is Set for this Number\n");
	}
	else
	{
		printf("The LSB Bit is NOT-Set for this Number\n");
	}
	return 0;
}
