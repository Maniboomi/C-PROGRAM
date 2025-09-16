#include<stdio.h>
int main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2] = {{1,2},{3,4},{5,6}};
	int c[2][2];
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j] = 0;
			for(k=0;k<3;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("Matrix Multiplication using 2x3 and 3x2 :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
