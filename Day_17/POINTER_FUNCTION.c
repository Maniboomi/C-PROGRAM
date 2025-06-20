#include<stdio.h>
int add(int a,int b)
{
	return a * b;
};
int main()
{
	int(*func)(int,int);
	func = add;
	printf("%d\n",func(2,3));
}

