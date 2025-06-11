#include<stdio.h>
int main()
{
	int a[] = {1,2};
	int b[] = {3,4,5};
	int *nested[] = {a,b};
	int sizes[] = {2,3};
	int outersize = 2;
	int flat[100];
	int index = 0;
	int i, j;
	for(i=0;i<outersize;i++)
	{
		for(j=0;j<sizes[i];j++)
		{
			flat[index++] = nested[i][j];
		}
	}
	printf("Flatten array are :");
	for(i=0;i<index;i++)
	{
		printf(" %d",flat[i]);
	}
	printf("\n");
	return 0;
}

