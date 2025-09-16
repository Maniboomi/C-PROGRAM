#include<stdio.h>
void string_reverse(char *arr,int n)
{
	char *start = arr;
	char *end = arr;
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
	printf("The Reversed String : %s\n",arr);
}
int main()
{
	char arr[] = "MANIKANDAN";
	printf("The String is : %s\n",arr);
	int n = sizeof(arr)/sizeof(arr[0]);
	string_reverse(arr,n);
	return 0;
}

