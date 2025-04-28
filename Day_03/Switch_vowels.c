#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an Alphabets: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("%c is a vowel. \n",ch);
		break;
		default:
		printf("%c is a consonent. \n",ch);
		break;
		return 0;
	}
}
