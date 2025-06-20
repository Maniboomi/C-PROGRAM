#include<stdio.h>
#include<stdlib.h>
int* fun()
{
	int *ptr = malloc(sizeof(int));
	if(ptr != NULL)
	{
		*ptr = 10;
	}
	return ptr;
};
int main()
{
	int *p = fun();
	if(p != NULL)
	{
		printf("%d\n", *p);
		free(p);
	}
	return 0;
}
