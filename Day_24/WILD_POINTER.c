#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 20;
	int *ptr;
	printf("Wild pointer pointing to Uninitialized memory : %p\n",ptr);
	ptr = &a;
	printf("Value after Initialized : %d\n",*ptr);
	return 0;
}
