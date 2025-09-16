#include<stdio.h>
int main()
{
	char str[] = "EMBEDDED";
	int freq[256] = {0};
	char *ptr = str;
	printf("The frequency of the string is : %s\n",str);
	while(*ptr != '\0')
	{
		freq[(unsigned char)*ptr]++;
		ptr++;
	}
	for(int i=0;i<256;i++)
	{
		if(freq[i] > 0)
		{
			printf("%c -> %d\n",i,freq[i]);
		}
	}
	return 0;
}

