#include<stdio.h>
int main()
{
	char str[20];
	char* cptr = "INDIA";
	printf("Enter some character:");
	fgets(str , sizeof(str), stdin);
	puts(str);
	puts(cptr);
	return 0;
}
