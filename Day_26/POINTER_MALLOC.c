#include<stdio.h>
#include<stdlib.h>
int* func_pointer(void)
{
	int *str = (int*)malloc(sizeof(int));
	*str = 42;
	return str;
}
int main()
{
	int *ptr = func_pointer();
	printf("%d\n",*ptr);
	free(ptr);
	return 0;
}

