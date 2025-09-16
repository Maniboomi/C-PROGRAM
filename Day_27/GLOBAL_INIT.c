#include<stdio.h>
int i;
int fun()
{
	printf("Hi");
}
int main()
{
	static int j;
	int k;
	printf("The Global Initialize Value is : %d\n",i);
	printf("The Local Initialize Value is : %d\n",k);
	printf("The Static Initialize Value is : %d\n",j);
	while(i)
	{
		fun();
		main();
	}
	printf("Hello\n");
	return 0;
}
