#include<stdio.h>
int recursive_fun(int* ptr,int n)
{
	if(n == 0)
	{
		return 0;
	}
	recursive_fun(ptr+1,n-1);
	printf("%d ",*ptr);
}
int main()
{
	int arr[5] = {1,8,7,4,5};
	int *ptr = arr;
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("The Backward array is : ");
	recursive_fun(ptr,n);
	printf("\n");
	return 0;
}

