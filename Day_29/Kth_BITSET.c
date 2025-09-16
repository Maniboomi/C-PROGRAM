#include<stdio.h>
int main()
{
	int num = 20;
	int set = 6;
	printf("The Number is %d\n",num);

	num = num | (1 << set);

	printf("After set the Bit2 The Value is %d\n",num);
	return 0;
}
