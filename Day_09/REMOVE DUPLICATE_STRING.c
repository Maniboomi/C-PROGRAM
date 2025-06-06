#include<stdio.h>
#include<string.h>
char* removeduplicate(char* s)
{
int index = 0;
int i ,j ,len;
len = strlen(s);
for(i=0;i<len;i++)
{
	for(j=0;j<=i;j++)
	{
		if(s[i] == s[j])
			break;
	}
		if(j == i)
		{
			s[index] = s[i];
			index++;
		}
}	
		s[index] = '\0';
		return s;
		}
int main()
{
	char s[] ="manikaandanmanis";
	removeduplicate(s);
	printf("%s\n",s);
	return 0;
}
