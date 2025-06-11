#include<stdio.h>
int main()
{
	int a[20], n;
	int sum = 0;
	float average;
	printf("Number of Elements :");
	scanf("%d",&n);
	printf("The Elements are :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("Sum of All The Elements :%d\n ",sum);
	average = (float)sum / n;
	printf("The Average of All Elements :%.2f\n",average);
	return 0;
}

