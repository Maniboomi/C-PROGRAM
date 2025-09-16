#include<stdio.h>
int main()
{
	int myint = 10;
	float myfloat = 3.14;
	double mydouble = 2.7182818;
	char mychar = 'A';
	short myshort = 100;
	printf("integer : %d [size : %lu bytes]\n",myint,sizeof(myint));
	printf("float : %.2f [size : %lu bytes]\n",myfloat,sizeof(myfloat));
	printf("double : %.9lf [double : %lu bytes]\n",mydouble,sizeof(mydouble));
	printf("character : %c [size : %lu bytes]\n",mychar,sizeof(mychar));
	printf("short integer : %d [size : %lu bytes]\n",myshort,sizeof(myshort));
	return 0;
}
