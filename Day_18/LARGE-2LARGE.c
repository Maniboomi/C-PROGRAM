#include<stdio.h>
int main()
{
	int arr[15] = {15,33,68,54,67,54,45,88,87,22,99,57,77,87};
	int largest = 0;
	int second_largest = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j] > largest)
			{
				largest = arr[j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j] > second_largest && arr[j] < largest)
			{
				second_largest = arr[j];
			}
		}
	}
	printf("The Largest element in an array is : %d\n",largest);
	printf("The Second Largest element in an array is : %d\n",second_largest);
	return 0;
}
