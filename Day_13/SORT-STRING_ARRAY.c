#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int i,j,l,ch;
	printf("Enter the string characters :" );
	fgets(str, sizeof str, stdin);
	str[strcspn(str, "\n")] = '\0';
	l = strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1;j++)
		{
			if(str[j] > str[j+1])
			{
				ch = str[j];
				str[j] = str[j+1];
				str[j+1] = ch;
			}
		}
	}
	printf("The Sorted String Array in a Ascending Order : %s\n",str);
	return 0;
}
