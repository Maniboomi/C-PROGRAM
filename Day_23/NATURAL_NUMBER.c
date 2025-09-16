#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,5,6,7,8,9,10};
	int i, balanced;
	int n = 10;
	int natural =  n * (n + 1) / 2;
	for(i=0;i<n-1;i++)
	{
		balanced += arr[i];
	}
	int result;
	result = natural - balanced;
	printf("The missing natural number is : %d\n",result);
	return 0;
}
	
