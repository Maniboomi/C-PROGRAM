#include<stdio.h>
void process(int arr[], int l, int(*callback)(int))
{
	for(int i=0;i<l;i++)
	{
		arr[i] = callback(arr[i]);
	}
}
int square(int n)
{
	return n*n;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int l = sizeof(arr) / sizeof(arr[0]);
	printf("Array element before processing : ");
	for(int i=0;i<l;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	process(arr, l, square);
	printf("Square of the array using callback function : ");
	for(int i=0;i<l;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return 0;
}


