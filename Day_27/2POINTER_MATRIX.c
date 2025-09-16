#include<stdio.h>
#include<stdlib.h>
int** create_matrix(int row,int column)
{
	int **matrix = malloc(row * sizeof(int));
	for(int i=0;i<row;i++)
	{
		matrix[i] = malloc(column * sizeof(int));
	}
	return matrix;
}
void multiply_matrix(int **a,int **b,int **c,int m,int n,int p)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			c[i][j] = 0;
			for(k=0;k<n;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void print_matrix(int **c,int m,int p)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
void free_matrix(int** matrix,int row)
{
	for(int i=0;i<row;i++)
	{
		free(matrix[i]);
	}
	free(matrix);
}
int main()
{
	int m=2,p=2,n=3;
	int **a = create_matrix(m,n);
	int **b = create_matrix(n,p);
	int **c = create_matrix(p,m);
	multiply_matrix(a,b,c,m,n,p);
	printf("The Resulted Matrix is : \n");
	print_matrix(c,m,p);
	free_matrix(a,m);
	free_matrix(b,n);
	free_matrix(c,p);
	return 0;
}
