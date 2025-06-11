#include<stdio.h>
int main()
{
	int count = 0, i, n;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	for(i=0; (n>>i)>0; i++)
	{
		if(n & (1<<i))
		{
			count++;
		}
	}
	printf("The number of 1's in a given decimal :%d\n",count);
	return 0;
}
