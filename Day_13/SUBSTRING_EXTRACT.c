#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	int i,pos,c = 0;
	printf("Enter the String Character : ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("The position to start extraction : ");
	scanf("%d",&pos);
	printf("Enter the length fo substring : ");
	scanf("%d",&i);
	while(c<i)
	{
		str2[c] = str1[pos + c - 1];
		c++;
	}
	str2[c] = '\0';
	printf("The substring Retrieved from the string is : %s\n",str2);
	return 0;
}


