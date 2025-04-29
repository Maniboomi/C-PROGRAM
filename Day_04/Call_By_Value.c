#include<stdio.h>
void incr(int a);
int main()
{
	int a = 7;
	incr(a);
	printf("%d",a);
	return 0;
}
void incr(int a)
{
	a++;
	}
