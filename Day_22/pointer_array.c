//Design a function that determines if two pointers point to the same array.
#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *p = &arr[1];
	int *q = &arr[2];
	if(p >= arr && p < arr + 5 || q >= arr && q < arr + 5)
	{
		printf("Both pointer points to the same array!\n");
	}
	else
	{
		printf("Both pointer [NOT] points to the same array!\n");
	}
	printf("The first pointer points to the array : %d\n",*(int*)p);
	printf("The second pointer points to the same array : %d\n",*(int*)q);
	return 0;
}
