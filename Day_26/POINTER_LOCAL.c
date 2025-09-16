#include<stdio.h>
int* pointer_func(void)
{
	static int local = 42;
	//int local = 42;
	return &local;
}
int main()
{
	int *arr = pointer_func();
	printf("Return Pointer to a Local Variable : %d\n",*arr);
	return 0;
}
