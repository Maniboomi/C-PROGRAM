#include<stdio.h>
int main()
{
	int i;
	int num = 1234567890;
	for (i = 31; i>=0; i--)
	{
		printf("%d",((num >> i)&1));
		if(i%4 == 0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
