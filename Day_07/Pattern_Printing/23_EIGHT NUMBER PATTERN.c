//EIGHT NUMBER STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter No of Rows: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 && j==1 || i==n && j==1 || i==n && j==n || i==1 && j==n)
			{
				printf(" ");
			}
			else if(i==1 || i==n || j==1 || j==n)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n-1 && j==1 || i==n-1 && j==n)
			{
				printf(" ");
			}
			else if(j==1 || j==n || i==n-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
