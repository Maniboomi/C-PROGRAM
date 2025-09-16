#include<stdio.h>
int main()
{
	char str[] = "EMBEDDED";
	printf("String before reversed: %s\n",str);
	char *start = str;
	char *end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	printf("Reversed string: %s\n",str);
	return 0;
}
