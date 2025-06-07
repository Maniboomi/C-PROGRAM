#include<stdio.h>
int main()
{
	char s[100];
	char reversed[100];
	char ch;
	int i=0;
	printf("Enter some string character :");
	while((ch = getchar()) != '\n')
	{
		s[i] =  ch;
		i++;
	}
	s[i] = '\0';
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	int j = len-1;
	int k=0;
	int flag = 1;
	while(j>=0)
	{
		reversed[k] = s[j];
		k++;
		j--;
	}
	for(i=0;i<len;i++)
	{
		if(s[i] != reversed[i])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
	{
		printf("The given string is Palindrome \n");
	}
	else
		printf("Not a Palindrome\n");
	return 0;
}
