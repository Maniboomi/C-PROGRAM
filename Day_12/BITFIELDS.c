#include<stdio.h>
struct data
{
	int d : 5;
	int m : 4;
	int y ;
};	
int main()
{
	struct data d1;
	d1.d = 2;
	d1.m = 21;
	d1.y = 2005;
	printf("The Size of Data after bitfield is : %lu bytes\n",sizeof(d1));
	return 0;
}


