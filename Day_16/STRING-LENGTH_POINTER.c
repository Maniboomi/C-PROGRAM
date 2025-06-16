#include<stdio.h>
#include<string.h>
int calculatelength(char* ch)
{
	int ctr = 0;
	while(*ch != '\0')
	{
		ctr++;
		ch++;
	}
	return ctr;
}
int main()
{
	char str[25];
	int l;
	printf("Enter the input string : ");
	fgets(str,sizeof str, stdin);
	l = calculatelength(str);
	printf("The given string %s The length of the string is : %d.\n",str,l-1);
	return 0;
}
