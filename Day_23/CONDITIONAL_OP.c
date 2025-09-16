#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter Two Number:" );
	scanf("%d %d",&a,&b);
	max = (a>b)?a:b;
	printf("the Maximum Number is %d\n",max);
}
