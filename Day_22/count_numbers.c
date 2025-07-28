//Create a function that counts the number of elements in an array using pointer arithmetic, without utilizing loop constructs.
#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *p = arr;
	int *q = arr + 5;
	int n = q - p;
	printf("Number of elements in an array : %d\n",n);
	return 0;
}



