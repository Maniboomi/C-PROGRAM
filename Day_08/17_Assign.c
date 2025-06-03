//LOCAL_GLOBAL_STATIC VARIABLES
#include<stdio.h>
int globalvar = 10;
void showstatic ()
{
	static int staticvar = 0;
	staticvar ++;
	printf("static_variable : %d\n",staticvar);
}
int main()
{
	int localvar = 5;
	printf("global_variable : %d\n",globalvar);
	printf("local_variable : %d\n",localvar);
	showstatic();
	return 0;
}

