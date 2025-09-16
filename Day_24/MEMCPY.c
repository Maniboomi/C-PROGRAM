#include<stdio.h>
#include<string.h>

int main()
{
	char str[10] = "1234567";
	char dest[10];
	memcpy(dest,str+2,5);
	for(int i=0;i<7;i++)
	{
		printf("%d ",dest[i]);
	}
	return 0;
}
