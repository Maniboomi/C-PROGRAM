#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter any three Number:" );
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
		max=a;
	else if(b>=a && b>=c)
		max=b;
	else
		max=c;
	printf("The Maximum Number is: %d\n",max);
}
