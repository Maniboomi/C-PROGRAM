#include<stdio.h>
int main()
{
	int* ab;
	int m = 29;
	printf("The address of M is : %d\n",&m);
	printf("The value of M is : %d\n",m);
	ab = &m;
	printf("The address of AB After declared to pointer variable is : %d\n",ab);
	printf("The value of AB is : %d\n",*ab);
	m = 34;
	printf("The address of M After Changing the M variable is : %d\n",&m);
	printf("The value of M is : %d\n",m);
	*ab = 7;
	printf("The address of AB After Changing the value using pointer variable is : %d\n",ab);
	printf("The value of AB is : %d\n",*ab);
	return 0;
}



	



