//INVERTED PYRAMID STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the No of Rows: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for (j=1; j<i;  j++)
		{
			printf(" ");
		}
		for (j=1; j<=n*2-(2*i-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
