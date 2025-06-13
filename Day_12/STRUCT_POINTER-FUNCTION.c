#include<stdio.h>
struct operation
{
	int(*operation)(int,int);
};
int add(int a, int b)
{
	return a+b;
};
int main()
{
	struct operation oper;
	oper.operation = &add;
	int result = (*oper.operation)(10,20);
	printf("The Result is %d\n",result);
	return 0;
}
