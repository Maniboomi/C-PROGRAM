#include<stdio.h>
long addtwonumber(long *n1, long *n2)
{
	long sum;
	sum = *n1 * *n2;
	return sum;
};
int main()
{
	long first,second,sum;
	printf("Enter the first element : ");
	scanf("%ld",&first);
	printf("Enter the second element : ");
	scanf("%ld",&second);
	sum = addtwonumber(&first, &second);
	printf("The product of Elements using callby reference is : %ld\n",sum);
	return 0;
}
