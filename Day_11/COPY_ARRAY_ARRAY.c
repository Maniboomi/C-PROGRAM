#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = {5,6,7,9,4,3,4};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	printf("The first array1 is :");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");

	int arr2[n];
	memcpy(arr2, arr1, sizeof(arr1));
	printf("The Copied another array is :");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}

