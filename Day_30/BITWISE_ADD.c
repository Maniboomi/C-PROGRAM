#include<stdio.h>
int add(int a,int b)
{
	while(b != 0)
	{
		int carry = (a & b) << 1;
		a = a ^ b;
		b = carry;
	}
	return a;
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
	printf("Sum = %d\n",add(x,y));
	return 0;
}
