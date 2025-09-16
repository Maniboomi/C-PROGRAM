#include<stdio.h>
#include<string.h>

int main()
{
	char str[10] = "1234567";
	//char dest[10];
	memcpy(str+2,str,5);
	for(int i=0;i<7;i++)
	{
		printf("%c ",str[i]);
	}
	return 0;
}
