#include<stdio.h>
#include<stdlib.h>
int main()
{
	int intvalue;
	char s1[] = "98765";
	intvalue = atoi(s1);
	printf("string value = %s\n",s1);
	printf("integer value = %d\n",intvalue);
	char s2[] = "stringtoint";
	intvalue = atoi(s2);
	printf("string value = %s\n",s2);
	printf("integer value = %d\n",intvalue);
	return 0;
}

