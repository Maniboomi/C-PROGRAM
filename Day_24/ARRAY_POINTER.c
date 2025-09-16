#include<stdio.h>

void add(int a,int b)
{
	printf("Array function pointer : %d\n",a+b);
}
void sub(int a, int b)
{
	printf("Array function pointer : %d\n",a-b);
}
void mul(int a, int b)
{
	printf("Array function pointer : %d\n",a*b);
}


int main()
{
	void (*func_arr[3])(int,int) = {add,sub,mul};

	func_arr[0](10,20);
	func_arr[1](30,20);
	func_arr[2](10,20);
	return 0;
}
