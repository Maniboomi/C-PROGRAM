#include<stdio.h>
#define SIZEOF(var)	((char*)(&var + 1) - (char*)(&var))
int main()
{
	int a = 5;
	char b = 0;
	double c = 0;
	short int *ptr = &a;
	int size = ((char*)(ptr+1) - (char*)(ptr));
	printf("The Size without Using Sizeof Operator : %d\n",size);

	printf("The Size without Using Sizeof Operator : %ld\n",SIZEOF(b));
	printf("The Size without Using Sizeof Operator : %ld\n",SIZEOF(c));

	return 0;
}

