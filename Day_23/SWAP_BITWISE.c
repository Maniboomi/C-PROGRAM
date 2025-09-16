#include<stdio.h>
int main()
{
	int a=10,b=5;
	printf("Enter before swapping : a %d b %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("Enter before swapping : a %d b %d\n",a,b);
	return 0;
}

	
