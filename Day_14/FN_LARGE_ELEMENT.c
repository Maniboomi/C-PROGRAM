#include<stdio.h>
int findmaxelement(int arr[], int n)
{
	int i=1, max = arr[0];
	while(i<n)
	{
		if(max < arr[i])
		{
			max = arr[i];
			i++;
		}
	}
	return max;
};
int main()
{
	int arr[100], l, n;
	int maxelement;
	printf("Enter the number of Elements : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	maxelement = findmaxelement(arr,n);
	printf("The Largest Elements in an Array is : %d\n",maxelement);
}

