#include<stdio.h>
int main()
{
	int arr[] = {23,45,67,89,65,43,21,57};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The element sorted in a ascending order : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The element sorted in a descending order : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return 0;
}


/*
#include<stdio.h>
int main()
{
	int arr[] = {23,45,67,89,65,43,21,57};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The element sorted in a ascending order : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return 0;
}  */
