#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int i, len, vowel = 0, cons = 0;
	printf("Enter the String Character :");
	fgets(str, sizeof(str),stdin);
	str[strcspn(str, "\n")] == '\0';
	len = sizeof(str)/sizeof(str[0]);
	for(i=0;i<len;i++)
	{
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
		{
			vowel++;
		}
		else if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
		{
			cons++;
		}
	}
	printf("The Vowels in the string character is : %d\n",vowel);
	printf("The Consonant in the string character is : %d\n",cons);
	return 0;
}


