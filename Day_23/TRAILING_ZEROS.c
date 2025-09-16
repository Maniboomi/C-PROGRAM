#include<stdio.h>
int main()
{
	int result;
	unsigned int num = 45;
	int count = 0;
	if(num == 0)
	{
		printf("the no of trailing zero is : %u\n",count);
	}
	while((num & 1) == 0)
	{
		count++;
		num >>= 1;
	}
	printf("the no of trailing zero is : %d\n",count);
	return 0;
}

