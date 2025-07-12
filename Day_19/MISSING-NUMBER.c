#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,5,6,7,8,9,10};
	int n = 10;
	int total_sum = n * (n + 1) / 2;
	int average = 0;
	for(int i=0;i<n;i++)
	{
		average += arr[i];
	}
	int missing = total_sum - average;
	printf("The missing Element in an array is :%d\n",missing);
	return 0;
}
	
