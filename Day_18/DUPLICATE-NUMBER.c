#include<stdio.h>
int main()
{
	int arr[] = {1,2,4,3,4,2};
	int i, j;
	int res[20] = {0};
	int n = sizeof(arr)  / sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				res[i] += 1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(res[i] > 1)
		{
			int alr_printed = 0;
			for(j=0;j<i;j++)
			{
				if(arr[i] == arr[j])
				{
					alr_printed = 1;
					break;
				}
			}
			if(!alr_printed)
			{
				printf("Duplicate found at %d\n",arr[i]);
			}
		}
	}
	return 0;
}

