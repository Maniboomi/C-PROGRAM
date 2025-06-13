#include<stdio.h>
int x = 50;
void globalvariable()
{
	printf("Access in a Function call : %d\n",++x);
};
int main()
{
	printf("The Global_Variable is :%d\n",x);
	globalvariable();
	printf("Global variable after a function call : %d\n",x);
	return 0;
}
