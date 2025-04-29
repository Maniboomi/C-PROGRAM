#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	a = 4;
	b = 8;
	swap(&a,&b);
	printf("a=%d, b=%d\n",a,b);
}
void swap(int *p1 ,int *p2)
{
	int d;
	d = *p1;
	*p1 = *p2;
	*p2 = d;
}
