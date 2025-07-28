#include<stdio.h>
int show(void)
{
	int a = 65;
	return a++;
}
int showadd(int b)
{
	printf("AFter added result data : %d\n",b + 90);
}
int main()
{
	void* arr[2];
	int result;
	arr[0] = show;
	arr[1] = showadd;
	int* ptr = arr;
	result = (**ptr)();
	printf("The value return by show: %d",result);
	(*(*ptr + 1)(result));
	return 0;
}
