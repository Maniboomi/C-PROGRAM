#include<stdio.h>
#include<stdlib.h>
int compare(const int* a, const int* b)
{
	return (*a - *b);
}
int main()
{
	int i, n;
	int a[] = {4,2,6,8,3};
	n = sizeof(a)/sizeof(a[0]);
	qsort(a,n,sizeof(int),compare);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	return 0;
}


