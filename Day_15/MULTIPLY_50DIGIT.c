#include<stdio.h>
#include<string.h>
int main()
{
	char num1[50];
	char num2[50];
	int result[110] = {0};
	int a[50], b[50];
	int i,j,temp;
	printf("Enter the First 50digit number : ");
	scanf("%50s",num1);
	printf("Enter the Second 50digit number : ");
	scanf("%50s",num2);
	int l1 = strlen(num1);
	int l2 = strlen(num2);
	for(i=l1-1,j=0;i>=0;i--,j++)
	{
		a[j] = num1[i] - '0';
	}
	for(i=l2-1,j=0;i>=0;i--,j++)
	{
		b[j] = num2[i] - '0';
	}
	for(i=0;i<l2;i++)
	{
		for(j=0;j<l1;j++)
		{
			result[i+j] += b[i] * a[j];
		}
	}
	for(i=0;i<l1+l2+2;i++)
	{
		temp = result[i] / 10;
		result[i] %= 10;
		result[i+1] += temp;
	}
	for(i=l1+l2+2;i>=0;i--)
	{
		if(result[i] != 0)
		{
			break;
		}
	}
	if(i<0)
	{
		printf("0\n");
	}
	else
	{
		for(;i>=0;i--)
		{
			printf("%d",result[i]);
		}
	}
	printf("\n");
	return 0;
}


