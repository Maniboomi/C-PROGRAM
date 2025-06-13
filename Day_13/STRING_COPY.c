#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20], str2[20];
	int l=0;
	printf("Enter the string characters :");
	fgets(str1,sizeof str1,stdin);
	str1[ strcspn (str1,"\n")] = '\0';
	while(str1[l] != '\0')
	{
		str2[l] = str1[l];
		l++;
	}
	str2[l] = '\0';
	printf("The First String : %s\n",str1);
	printf("The Second String : %s\n",str2);
	printf("No of Character Copied in a String : %d\n",l);
	return 0;
}
