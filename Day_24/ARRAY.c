#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int *p = arr;
	*p++ = 99;
	printf("After modify the values are : %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
	return 0;
}
