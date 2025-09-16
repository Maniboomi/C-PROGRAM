#include<stdio.h>
int main()
{
	int a=15, b=2;
	char x='a';
	double divide;
	divide = (double)a/b;
		x=x+3;
	printf("The Result of Implicit Typecasting is %c\n",x);
	printf("The Result of Explicit Typecasting is %f\n",divide);
	return 0;
}
