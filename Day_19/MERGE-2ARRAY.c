#include<stdio.h>
int main()
{
	int arr1[] = {22,31,56,74};
	int arr2[] = {89,93,25,67};
	int res[20] = {0};
	int n = 8, i;
	for(i=0;i<n-4;i++)
	{
		res[i] = arr1[i];
	}
	for(i=0;i<n-4;i++)
	{
		res[n-4+i] = arr2[i];
	}
	printf("The Merge Element of two array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",res[i]);
	}
	printf("\n");
	return 0;
}

	
