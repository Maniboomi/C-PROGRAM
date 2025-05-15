//HEART STAR PATTERN WITH NAME IN CENTER
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	int n=5;
	char name [50];
	int length;
	int pyramid=2 * n + 1;
	int totalstars=21;
	printf("Enter Your Name :");
	gets(name);
	length = strlen(name);
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i+1;j++)

		{
			printf(" ");
		}
		for(j=1;j<=2*i+1;j++)
		{
			printf("*");
		}
		for(j=1;j<2*n-2*i+1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=pyramid;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		if(i==1)
		{
			for(j=1;j<=(totalstars-length)/2;j++)
			{
				printf("*");
			}
				printf("%s", name);
			for(j=1;j<=(totalstars-length)/2;j++)
			{
				printf("*");
			}
		}
		else
		for(j=1;j<= (2*pyramid - 2*i)+2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
