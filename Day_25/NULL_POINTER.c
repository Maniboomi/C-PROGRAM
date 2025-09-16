#include<stdio.h>
int main()
{
	int a = 20;
	int *ptr = &a;
	printf("A Integer Value : %d\n",*ptr);
	ptr = NULL;
	printf("Accessing a Null Pointer : %d\n",*ptr);
	return 0;
}


