#include<stdio.h>
int y =25;
void localvariable()
{
	int x=5;
	printf("Local Variable is : %d\n",x);
};
void globalvariable()
{
	printf("Access Global Variable in a Function_call : %d\n",y);
};
int main()
{
	localvariable();
	printf(" Global variable is :%d\n",y);
	globalvariable();
	return 0;
}

	


