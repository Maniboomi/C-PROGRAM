#include<stdio.h>
int main()
{
	int num = 27;
	int count = 0,i;
	for(i=31;i>=0;i--)
	{
		if((num >> i) & 1)
		{
			count++;
		}
	}
	printf("The Count Of Setbit in a Integer : %d\n",count);
	return 0;
}
	
