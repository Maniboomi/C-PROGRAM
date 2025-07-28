#include<stdio.h>
int main()
{
	char a[50] = "STRING ";
	char b[] = "SUBWAY";
	char *p = a;
	char *q = b;
	while(*p != '\0')
	{
		p++;
	}
	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	printf("The concatenate strings are : %s\n",a);
	return 0;
}


		
