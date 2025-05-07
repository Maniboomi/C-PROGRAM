//HALLOW SQUARE WITH DIAGONAL
#include<stdio.h>
int main()
	{
	int i,j;
	for (i=1; i<=7; i++)
	{
		for (j=1; j<=7; j++)
		{
			if(i==1 || i==7 || j==1 || j==7 || i==j || j==(7-i+1))
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
