#include<stdio.h>
int main()
{
	char *a = "STRING";
	char *b = "SUBWAY";
	char *temp;
	printf("Before Swapping !\n");
	printf("%s\n",a);
	printf("%s\n",b);
	
	temp = a;
	a = b;
	b = temp;

	printf("After Swapping !\n");
	printf("%s\n",a);
	printf("%s\n",b);
	return 0;
}
