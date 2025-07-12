#include<stdio.h>
int main()
{
	int arr[] = {100,200,300,400,500};
	int *ptr = arr+3;
	printf("%d\n", ptr[2]);
	return 0;
}
