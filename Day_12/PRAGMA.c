#include<stdio.h>
#pragma pack(1)
struct padding 
{
	int arr;
	char aar;
};
#pragma pack()
struct mystruct
{
	char a;
	int b;
};
int main()
{
	struct mystruct s1;
	s1.a = 'A';
	s1.b = 32;
	printf("The Size of struct Without pragma is : %lu\n",sizeof(s1));
	struct padding p1;
	p1.arr = 'B';
	p1.aar = 42;
	printf("The Size of struct With pragma is : %lu\n",sizeof(p1));
	return 0;
}

	

