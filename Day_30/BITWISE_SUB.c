#include<stdio.h>
int sub(int a, int b)
{
	a = a + ( ~b + 1);
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
	printf("Subtract = %d\n",sub(x,y));
	return 0;
}

