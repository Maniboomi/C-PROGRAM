#include<stdio.h>
int main()
{
	char str1[50];
	char str2[50];
	char *ptr1 = str1;
	char *ptr2 = str2;
	int i = -1;
	printf("Enter a string : ");
	scanf("%s",str1);
	while(*ptr1)
	{
		ptr1++;
		i++;
	}
	while(i>=0)
	{
		ptr1--;
		*ptr2 = *ptr1;
		ptr2++;
		--i;
	}
	*ptr2 = '\0';
	printf("Reverse of the string is : %s\n",str2);
	return 0;
}
