#include<stdio.h>
void flatten(int *nested[],int sizes[],int outersize,int flat[],int *index)
{
	int i, j;
	for(i=0;i<outersize;i++)
	{
	for(j=0;j<sizes[i];j++)
	{
		flat[(*index)++] = nested[i][j];
	}
	}
}
int main()
{
	int a[] = {1,2};
	int b[] = {3,4,5};
	int c[] = {6};
	int *nested[] = {a,b,c};
	int sizes[] = {2,3,1};
	int outersize = 3;
	int flat[100];
	int index = 0;
	flatten(nested, sizes, outersize, flat, &index);
	printf("Flatten array are :");
	for(int i=0;i<index;i++)
	{
		printf("%d",flat[i]);
	}
	printf("\n");
	return 0;
}
