#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int *p = &arr[1];
	int *q = &arr[3];
	printf("%ld\n",q-p);
	return 0;
}


//address of p - address of q / sizeof(type)
//&arr[3] - &arr[1] / size of (int)
//1012 - 1004 / 4 = 2.
