#include<stdio.h>
void reverse_array(int* arr,int n)
{
	int *start = arr;
	int *end = arr + n - 1;
	printf("The Reversed Array :");
	while(start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	for(int j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Enter the Elements : ");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	reverse_array(arr,n);
	return 0;
}
