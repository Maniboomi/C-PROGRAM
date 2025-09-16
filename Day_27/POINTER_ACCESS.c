#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int *p = arr;

	//printf("%d ",*p++);
	//printf("%d ",*(p+1));
	//printf("%d ",*++p);

	printf("%d ",*p);
	printf("%d ",*(p+1));
	printf("%d ",*++p);
	printf("%d\n",*p);
	printf("\n");
	printf("%d ",++*p);
	printf("%d ",(*p)++);
	printf("%d\n",*p);
	return 0;
}
