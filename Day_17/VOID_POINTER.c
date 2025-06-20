#include<stdio.h>
int main()
{
	int x = 100;
	void *ptr = &x;
	printf("%d\n", *(int*)ptr);
	return 0;
}
