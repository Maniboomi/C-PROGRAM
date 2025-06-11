#include<stdio.h>
#define N 4
int main()
{
	int A[N][N] = {{1,2,3,4},{5,6,7,8},{9,8,7,6},{4,3,2,1}};
	int B[N][N] = {{1,2,3,4},{5,6,7,8},{9,3,7,6},{4,3,2,1}};
	int i, j, count = 0;
	printf("First Matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(A[i][j] != B[i][j])
			{
				count++;
			}
		}
	}
	if(count>0)
	{
		printf("Matrix are Not Equal.\n");
	}
	else
		printf("Matrix are Equal.\n");
	return 0;
}


