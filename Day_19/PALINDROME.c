#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20] = "malayalam";
	int n = strlen(arr);
	printf("The string length is : %d\n",n);
	int found = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == arr[n-1-i])
		{
			found = 1;
		}
	}
	if(!found)
	{
		printf("Not a palindrome.");
	}
	else
		printf("The given string is a palindrome !\n");
	return 0;
}
