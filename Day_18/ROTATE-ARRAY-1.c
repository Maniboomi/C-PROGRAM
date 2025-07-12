#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	int i, n;
	n = sizeof(arr)/sizeof(arr[0]);
	printf("the elements before rotating : ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	int last = arr[n-1];
	for(i=0;i<n-1;i++)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = last;
	printf("The elements after rotating by one : ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;
}
