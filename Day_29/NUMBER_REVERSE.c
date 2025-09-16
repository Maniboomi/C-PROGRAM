#include<stdio.h>
int main()
{
	int arr[] = {12,13,14,15,16,17};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("The Array Elements are : ");
	int i,temp[6];
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(i=0;i<n;i++)
	{
		temp[i] = arr[n-1-i];
	}

	printf("The Reversed Array Elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",temp[i]);
	}
	printf("\n");
	return 0;
}



