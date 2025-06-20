#include<stdio.h>
int compare (int *a, int *b)
{
	return (*(int*)a - *(int*)b);
};
int main()
{
	int arr[] = {1,5,8,15,5,9,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int found = 0;
	qsort(arr, n, sizeof(int), compare);
	for(int i= n-2; i>=0; i--)
	{
		if(arr[i] != arr[n-1])
		{
			found = arr[i];
			break;		
		}
		else
			printf("Element is not found!\n");
	}
	printf("The Second largest element in an array is :%d\n",found);

	return 0;
}
