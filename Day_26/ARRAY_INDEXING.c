#include<stdio.h>
int main()
{
	int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int (*p)[15] = &arr;
	
	printf("Array of 15 Pointer to Int : ");
	for(int i=0;i<15;i++)
	{
		printf("%d ",(*p)[i]);
	}
	printf("\n");

	int a=5,b=10,c=15,d=20;
	int *p1[10];
	p1[0] = &a;
	p1[1] = &b;
	p1[2] = &c;
	p1[3] = &d;
	printf("Pointer to an Array of 10 Int : ");
	for(int j=0;j<4;j++)
	{
		printf("%d ",*p1[j]);
	}
	printf("\n");
	return 0;
}
