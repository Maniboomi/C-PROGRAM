#include<stdio.h>
int main()
{
	int count ,len;
	int a[] = {3,7,5,3,4,2,5};
	len = sizeof(a)/sizeof(a[0]);
	for (int i=0; i<len; i++)
	{
		count = 0;
		for(int j=0; j<len ; j++)
		{
			if((i != j && a[i] == a[j]))
			{
				count++;
				break;
			}
		}
			if(count == 0)
			{
				printf("The Non Repeating Number is : %d\n",a[i]);
			}
	}
	return 0;
}


