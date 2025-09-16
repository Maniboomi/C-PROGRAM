#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	return (*(int*)a - *(int*)b);
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

	qsort(arr,n,sizeof(int),compare);

	printf("The Sorted Array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");

	return 0;
}
