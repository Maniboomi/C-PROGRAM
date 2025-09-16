#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 90;
	int *x = (int*)malloc(sizeof(char));
	x = &a;
	printf("value which is pointed by x : %d\n",*x);
	return 0;
}
