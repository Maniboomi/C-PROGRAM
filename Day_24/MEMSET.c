#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	//char dest[10];
	memset(str,'A',5);
	for(int i=0;i<5;i++)
	{
		printf("%c ",str[i]);
	}
	return 0;
}
