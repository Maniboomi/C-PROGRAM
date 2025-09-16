#include<stdio.h>
int main()
{
	int a = 10;
	int *ptr = &a;
	int **pptr = &ptr;
	printf("A Pointer Variables Before Modification : %d\n",a);
	**pptr = 50;
	printf("A Pointer Variables After Modification : %d\n",a);
	return 0;
}
