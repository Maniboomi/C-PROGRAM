#include<stdio.h>
int main()
{
	int j,num;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(num > 0)
	{
		j = num % 10;
		if(j != 0 && j != 1)
		{
			printf("Number is not binary\n");
			break;
		}
		num = num / 10;
		if(num == 10)
		{
			printf("Number is binary\n");
		}
	}
	return 0;
}
