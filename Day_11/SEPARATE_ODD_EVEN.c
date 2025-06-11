#include<stdio.h>
int main()
{
	int arr1[10], arr2[10], arr3[10];
	int i, j=0, k=0, n;
	printf("The Number of Elements is :");
	scanf("%d",&n);
	printf("Enter the Elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr1[i] % 2 == 0)
		{
			arr2[j] = arr1[i];
			j++;
		}
		else
		{
			arr3[k] = arr1[i];
			k++;
		}
	}
	printf("The Even Number in the Array is :");
	for(i=0;i<j;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	printf("The Odd Number in the Array is :");
	for(i=0;i<k;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}
