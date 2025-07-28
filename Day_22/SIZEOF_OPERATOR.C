#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *p = arr;
	int *q = arr + 5;
	int n = q - p;
	int size = (char*)q - (char*)p;
	printf("The number of elements in an array : %d\n",n);
	printf("Size of Array without using Sizeof operator : %d\n",size);
	return 0;
}


