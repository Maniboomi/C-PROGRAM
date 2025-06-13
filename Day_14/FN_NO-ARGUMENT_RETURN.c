#include<stdio.h>
#include<math.h>
int sum()
{
	int a=50,b=80,sum;
	sum = sqrt(a) + sqrt(b);
	return sum;
};
int main()
{
	int num;
	num = sum();
	printf("sum of two given number = %d\n",num);
	return 0;
}

