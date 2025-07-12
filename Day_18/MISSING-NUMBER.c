#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,5};
	int actual_sum = 0;
	int globalsum;
	int n = 5;
	globalsum = n * (n + 1) / 2;
	for(int i=0;i<n-1;i++)
	{
		actual_sum += arr[i];
	}
	int missing = 0;
	missing = globalsum - actual_sum;
	printf("The Missing value is %d\n",missing);
	return 0;
}
