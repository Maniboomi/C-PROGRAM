#include<stdio.h>
int main()
{
	int arr1[6] = {1,7,9,5,2,3};
	int arr2[6] = {3,2,1,7,9,5};
	int found = 0, n;
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	if(n1 != n2)
	{
		found = 0;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(arr1[i] != arr2[i])
				{
					found = 0;
					break;
				}
		}
	}
	if(found)
	{
		printf("The two string are not equal.\n");
	}
	else
	{
		printf("The two array are equal.\n");
	}
	return 0;
}



