#include<stdio.h>
int main()
{
	int arr[8] = {1,2,3,4,5,6,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);
	int last = arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = last;
	printf("The left rotate array by one position is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
