//Do-while loop using goto function
#include<stdio.h>
int main()
{
	int i = 1;
start:
	printf("The Value of i After increment : %d\n",i);
		i++;
		if(i<=5)
		{
			goto start;
		}
		return 0;
}

