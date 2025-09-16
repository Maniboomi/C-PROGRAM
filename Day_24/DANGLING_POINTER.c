#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	//int *ptr = &a;
	int *ptr = (int*)malloc(sizeof(int));
	*ptr = 100;
	printf("Value Before Free : %d\n",*ptr);
	printf("Dangling Pointer points the Memory : %p\n",ptr);
	free(ptr);
	printf("Value After Free : %d\n",*ptr);
	printf("After Free Pointer the Dangling Pointer points the Same memory : %p\n",ptr);
	ptr = NULL;
	printf("Value Assign to the NULL pointer : %d\n",ptr);
	printf("After a NULL Pointer assigning to Dangling Pointer : %p\n",ptr);
	return 0;
}
