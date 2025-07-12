#include<stdio.h>
int main()
{
	int arr[15] = {15,33,67,43,89,11,99,56,55,46,78,93,22,44,66};
	int temp;
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The Sorted elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return 0;
}
