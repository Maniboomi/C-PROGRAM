#include<stdio.h>
int main()
{
	int arr1[8] = {1,2,3,4,5,6,7,8};
	int arr2[8] = {0};
	int n = sizeof(arr1)/ sizeof(arr1[0]);
	int i;
	for(i=0;i<n;i++)
	{
		arr2[i] = arr1[i];
	}
	for(i=0;i<n;i++)
	{
		arr1[n-1-i] = arr2[i];
	}
	printf("Enter the reverse array elements : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr1[i]);
	}
	printf("\n");
	return 0;
}
