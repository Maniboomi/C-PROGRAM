#include<stdio.h>
int main()
{
	int arr[20];
	int n,j,i,temp;
	printf("The Number of Elements is :");
	scanf("%d",&n);
	printf("Enter the Elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The Ascending Sort Array are :");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

