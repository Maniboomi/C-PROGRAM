//STRUCT INITIALIZATION
#include<stdio.h>
struct student
{
	int a;
	char b;
	float c;
	double d;
	short int e;
};
int main()
{
	struct student s1;
		{
			printf("The Size of int is : %lu bytes\n",sizeof(s1.a));
			printf("The Size of char is : %lu bytes\n",sizeof(s1.b));
			printf("The Size of float is : %lu bytes\n",sizeof(s1.c));
			printf("The Size of double is : %lu bytes\n",sizeof(s1.d));
			printf("The Size of short int is : %lu bytes\n",sizeof(s1.e));
			printf("The Size of total struct is : %lu bytes\n",sizeof(s1));
			return 0;
		}
}
