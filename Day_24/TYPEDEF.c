#include<stdio.h>

typedef void (*operation)(int,int);

void add(int a,int b)
{
	printf("Typedef in pointer : %d\n",a+b);
}

void sub(int a,int b)
{
	printf("Typedef in pointer : %d\n",a-b);
}

int main()
{
	operation op;
	op = add;
	op(20,30);

	op = sub;
	op(30,20);
	return 0;
}

