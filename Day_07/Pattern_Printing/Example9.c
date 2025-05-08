#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the No of Rows: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i+1;  j++)
		{
			if(i==1|| j==1 || j==n-i+1)
			{
			printf("*");
		}
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}
