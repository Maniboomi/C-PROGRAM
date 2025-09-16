#include<stdio.h>
void reverse_words(char* str)
{
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
	printf("Reversed words : %s\n",str);
}
int main()
{
	char str[] = "EMBEDDED";
	printf("Before Reversed words : %s\n",str);
	reverse_words(str);
	return 0;
}
