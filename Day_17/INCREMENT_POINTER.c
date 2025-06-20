#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4};
	int *p = arr;
	*p++;
	printf("%d\n", *p);
	return 0;
}
