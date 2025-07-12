#include<stdio.h>
int* getArray();
int main()
{
	int *p,i;
	p = getArray();
	for(i=0; i<5; i++)
	printf("%d", *(p+i));
	printf("\n");
	return 0;
}
int* getArray()
{
	static int a[5],i;
	printf("Enter 5 Elements: ");
	for (i=0; i<5; i++)
	scanf("%d",&a[i]);
	return a;
}
