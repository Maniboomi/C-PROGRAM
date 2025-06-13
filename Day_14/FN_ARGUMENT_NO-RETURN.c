#include<stdio.h>
void arg(int a, int* arr, char* b)
{
	for(int i=0;i<5;i++)
	{
		arr[i]  = arr[i]+50;
	}
	printf("Value of A is %d\n",a);
	for(int i=0;i<5;i++)
	{
		printf("Value of arr[%d] is :%d\n",i,arr[i]);
	}
	printf("The String Characters are : %s\n",b);
};
int main()
{
	int i,a;
	a = 50;
	char b[30] = "mohanram";
	int arr[5] = {10,20,30,40,50};
	arg(a, &arr[0],&b[0]);
	return 0;
}
