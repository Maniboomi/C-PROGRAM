#include<stdio.h>
int arraysum(int []);
int main()
{
	int a[5],i,sum;
	printf("Enter 5 Elements: ");
	for(i=0; i<5; i++)
	scanf("%d",&a[i]);
	sum = arraysum(a);
	printf("Sum is %d",sum);
	return 0;
}
int arraysum(int a[])
{
	int i,sum=0;
	for(i=0; i<5; i++)
	{
		sum = sum + a[i];
	}
	return sum;
}
