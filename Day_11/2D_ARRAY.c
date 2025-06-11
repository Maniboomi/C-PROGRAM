#include<stdio.h>
int main()
{
	int a[4][2] = {{1,2},{5,7},{3,9},{9,2}};
	int i,j;
	for (i=0;i<4;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
