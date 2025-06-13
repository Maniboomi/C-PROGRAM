#include<stdio.h>
int arg(int a, int* arr)
{
	for(int i=0;i<5;i++)
	{
		arr[i]  = arr[i]+50;
	}
	return a;
}
int main()
{
	int i,a;
	a = 50;
	int arr[5] = {10,20,30,40,50};
	a = arg(a, &arr[0]);
	printf("Value of A is %d\n",a);
	for(i=0;i<5;i++)
	{
		printf("Value of arr[%d] is :%d\n",i,arr[i]);
	}
	return 0;
}
