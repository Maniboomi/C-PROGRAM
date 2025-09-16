#include<stdio.h>
int main()
{
	int a;
	int *p;
	p = &a;
	p++;
	char c;
	char *cp;
	cp = &c;
	cp++;
	printf("Enter the value is : %d\n",&a);
	printf("Enter the Increment value is : %d\n",*p);
	printf("Enter the character value is: %c\n",&c);
	printf("Enter the Increment character is value: %c\n",cp);
	return 0;
}
