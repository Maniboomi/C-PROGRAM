//PLUS IN STAR PATTERN
//PLUS STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter No of Rows: ");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			printf(" ");
		}
		for (j=1;j<=1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
	for (i=1;i<=1;i++)
	{
		for(j=1;j<=n*2-1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
	for (i=n-1;i>=1;i--)
	{
		for (j=1;j<=n-1;j++)
		{
			printf(" ");
		}
		for (j=1;j<=1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
	printf("\n");
}
