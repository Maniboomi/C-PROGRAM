#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[20];
	int l=0;
	printf("Enter the string characters :");
	fgets(str,sizeof  str,stdin);
	str[ strcspn (str,"\n")] = '\0';
	while(str[l] != '\0')
	{
		l++;
	}
	l -= 1;
	printf("Length of the String using STRCSPN : %d\n",l);
	return 0;
}
