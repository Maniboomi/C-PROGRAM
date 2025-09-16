#include<stdio.h>
int main()
{
	char str[] = "MALAYALAM";
	char *start = str;
	char *end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		if(*start == *end)
		{
			start++;
			end--;
		}
		else
		{
			printf("A string is not a palindrome\n");
			break;
		}
	}
	if(start == end)
	{
		printf("The given string is a palindrome\n");
	}
	return 0;
}
