#include<stdio.h>
int main()
{
	int a[5] = {5,7,9,3,6};
	int b[5];
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
	b[3] = a[3];
	b[4] = a[4];
	printf("%d\n", b[2]);
	return 0;
}
