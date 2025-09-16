#include<stdio.h>
int main()
{
	int temp=0, freq[10]={0},num;
	printf("Enter any Number : ");
	scanf("%d",&num);
	while(num > 0)
	{
		int digit = num % 10;
		freq[digit]++;
		if(freq[digit] > 1)
		{
			temp = 1;
		}
		num /= 10;
	}
	if(temp)
	{
		printf("The Repeated Digits are : ");
		for(int i=0;i<10;i++)
		{
			if(freq[i] > 1)
			{
				printf("%d",i);
			}
		}
	}
	printf("\n");
	if(!temp)
	{
		printf("All Unique Digits\n");
	}
	return 0;
}
			
