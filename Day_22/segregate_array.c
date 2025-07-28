#include<stdio.h>
int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int *num;
	int i;
	//int *odd;
	//int *even;
	for(i=0;i<6;i++)
	{
		num = &arr[i];
		if(*num % 2 == 0)
		{
			printf("%d is even\n",*num);
		}
		else
		{
			printf("%d is odd\n",*num);
		}
	}
	return 0;}
