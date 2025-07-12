#include<stdio.h>
int main()
{
	int arr[8] = {22,31,56,74,89,93,25,17};
	int n = sizeof(arr) / sizeof(arr[0]);
	int largest = 0;
	int second_largest = 0;
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j] > largest)
			{
				largest = arr[j];
			}
			else if(arr[j] < largest && arr[j] > second_largest)
			{
				second_largest = arr[j];
			}
		}
	}
	printf("The second largest element in an array is : %d\n",second_largest);
	return 0;
}
