#include<stdio.h>
int mul(int a, int b)
{
	int result = 0;
	while(b > 0)
	{
		if(b & 1)
		{
			result = result + a;
		}
		a <<= 1;
		b >>= 1;
	}
	return result;
}
int main()
{
	//int x = 5;
	//int y = 3;
	int x,y;
	printf("Enter the first adder:");
	scanf("%d",&x);
	printf("Enter the second adder:");
	scanf("%d",&y);
	printf("Multiply = %d\n",mul(x,y));
	return 0;
}

