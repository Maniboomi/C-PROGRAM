#include<stdio.h>
int main()
{
	int arr1[] = {8,2,3,4,5,6,7,1};
	int arr2[] = {4,5,7,6,1,11};
	int i,j,len1,len2;
	len1 = sizeof(arr1)/sizeof(arr1[0]);
	len2 = sizeof(arr2)/sizeof(arr2[0]);
	int index = 0;
	int res[100];
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(arr1[i] == arr2[j])
			{
				res[index] = arr1[i];
				index++;
				break;
			}
		}
	}
	printf("The Common Elements between Two Array is :");
	for(i=0;i<index;i++)
	{
		printf(" %d",res[i]);
	}
	printf("\n");
	return 0;
}
