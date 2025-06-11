#include<stdio.h>
int main()
{
	int a[20], n;
	printf("Number of Elements :");
	scanf("%d",&n);
	printf("The Elements are :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int larg,i;
	larg = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i] < larg)
		{
			larg = a[i];
		}
	}
	printf("The Minimum Element is : %d\n",larg);
	larg = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i] > larg)
		{
			larg = a[i];
		}
	}
	printf("The Maximum Element is : %d\n",larg);
	return 0;
}
