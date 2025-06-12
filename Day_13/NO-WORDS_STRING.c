#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[20];
	int l=0;
	int word=1;
	printf("Enter the string characters :");
	fgets(str,sizeof  str,stdin);
	str[ strcspn (str,"\n")] = '\0';
	while(str[l] != '\0')
	{
		if(str[l] == ' ' || str[l] == '\t' || str[l] == '\n')
		{
			word++;
		}
		l++;
	}
	l -= 1;
	printf("No of Words in a String : %d\n",word);
	return 0;
}
