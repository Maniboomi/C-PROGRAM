#include<stdio.h>
int main()
{
	int a = 20;
	int b = 10;
	int *ptr1 = &a;
	int *ptr2 = &b;

	printf("Before swapping : %d %d\n",*ptr1,*ptr2);
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;

	printf("After swapping : %d %d\n",*ptr1,*ptr2);
	return 0;
}

