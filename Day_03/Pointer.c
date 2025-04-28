#include<stdio.h>
int main()
{
	int a=20;
	int *p;
	int **p2;
	p = &a;
	p2 = &p;
	printf("%d\n", &p2);
	printf("%d\n", p2);
	printf("%d\n", *p2);
	printf("%d\n", **p2);


	return 0;
}
