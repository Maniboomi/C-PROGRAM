#include<stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	int *p = &a;
	*p++ = b;
	//*p++;
	//(*p)++;
	printf("the value of a is : %d\n",a);
	printf("the value of b is : %d\n",b);
	return 0;
}
