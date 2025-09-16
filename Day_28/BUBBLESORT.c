#include<stdio.h>
#include<stdlib.h>
void bubblesort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}	
int main()
{
	int arr[] = {2,9,7,1,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("The Initial Array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");

	bubblesort(arr,n);

	printf("The Sorted Array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");

	return 0;
}
