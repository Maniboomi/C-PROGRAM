#include<stdio.h>
#include<string.h>
char* removeduplicate(char* s)
{
	int i,j, len;
	int index = 0;
	len = sizeof(s)/sizeof(s[0]);
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
	char s[20] = "greekforgreeks";
	removeduplicate(s);
	printf("%s\n",s);
		return 0;
}



