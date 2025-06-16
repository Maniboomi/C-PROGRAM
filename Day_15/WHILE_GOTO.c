//while loop using goto function
#include<stdio.h>
int main()
{
	int i = 1;
start:
	if(i<=5)
	{
		printf("The Value of i After increment : %d\n",i);
		i++;
		goto start;
	}
	return 0;
}





