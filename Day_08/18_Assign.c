//SWAP_TWO VARIABLES
#include<stdio.h>
int main()
{
	int a,b,temp;
	a = 10;
	b = 20;
	printf("variables before swapping : a = %d b = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("variables after swapping : a = %d b = %d\n",a,b);
	return 0;
}

