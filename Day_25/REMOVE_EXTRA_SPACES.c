#include<stdio.h>
int main()
{
	char str[] = "   EMBED  DED  ";
	char *ptr = str;
	printf("A string with extra spaces : %s\n",str);
	printf("Remove extra spaces in a string: \n");
	while(*ptr != '\0')
	{
		if(*ptr != ' ')
		{
			printf("%c",*ptr);
		}
		ptr++;
	}
	printf("\n");
	return 0;
}
