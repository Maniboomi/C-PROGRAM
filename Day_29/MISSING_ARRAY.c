#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,6,7,8,9,10};
	int array = 0,full=0,i;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		array ^= arr[i];
	}
	for(i=1;i<=n+1;i++)
	{
		full ^= i;
	}
	int missing =array ^ full;
	printf("The Missing Elements in an Array is : %d\n",missing);
	return 0;
}
