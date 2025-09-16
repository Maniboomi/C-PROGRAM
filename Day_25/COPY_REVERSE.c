#include<stdio.h>
void copy_reverse(int* src,int* dest,int n)
{
	int *s = src;
	int *d = dest + n - 1;
	while(n--)
	{
		*d-- = *s++;
	}
}
int main()
{
	int str[] = {1,2,3,4,5};
	printf("The Original value is : ");
	int n = sizeof(str)/sizeof(str[0]);
	for(int i=0;i<n;i++)
	{
		printf("%d ",str[i]);
	}
	printf("\n");
	int *src = str;
	int dest[5];
	printf("The copied reversed value is : ");
	copy_reverse(src,dest,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",dest[i]);
	}
	printf("\n");
	return 0;
}

