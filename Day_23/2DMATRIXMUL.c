#include<stdio.h>
#define R1 2
#define R2 2
#define C1 2
#define C2 2
void mulmatrix(int (*m1)[C1],int (*m2)[C2],int (*result)[C2])
{
	if(C1 != R2)
	{
		printf("INVALID INPUT\n");
	return;
	}
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C2;j++)
		{
			result[i][j] = 0;
			for(int k=0;k<C1;k++)
			{
				result[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}
int main()
{
	int m1[R1][C1] = {{3,2},{2,3}};
	int m2[R2][C2] = {{3,3},{1,2}};
	int result[R1][R2];
	mulmatrix(m1 ,m2 ,result);
	printf("Result matrix is : \n");
	for (int i=0;i<R1;i++)
	{
		for(int j=0;j<C2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
