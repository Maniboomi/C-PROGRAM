//X STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,n;
	int count;
	printf("Enter No of Rows: ");
	scanf("%d",&n);
	count = n*2-1;
	for (i=1;i<=n*2-1;i++)
	{
		for(j=1;j<=n*2-1;j++)
		{
			if(j==count - i + 1 || j==i)
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
